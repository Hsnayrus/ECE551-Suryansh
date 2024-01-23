#include <stdio.h>
#include <stdlib.h>

typedef struct _retire_info {
    int months;
    double contribution;
    double rate_of_return;
} retire_info;

double computeBalance(double initial, double contribution,
                      double rate_of_return) {
    // This function is responsible for calculating the balance each after
    // interest and monthly contribution after each month starting from a
    // initial balance
    initial += contribution + (rate_of_return / 1200) * initial;
    return initial;
}

double balanceDuringTenure(int startAge, double initial, retire_info info) {
    for (int i = 0; i < info.months; i++) {
        printf("Age %3d month %2d you have $%.2lf\n", (startAge / 12),
               (startAge % 12), initial);
        initial =
            computeBalance(initial, info.contribution, info.rate_of_return);
        startAge++;
    }
    return initial;
}

void retirement(int startAge, double initial, retire_info working,
                retire_info retired) {
    // Compute for the time worked
    initial = balanceDuringTenure(startAge, initial, working);
    // Update the start age here as well.
    startAge += working.months;
    // Compute during retirement
    initial = balanceDuringTenure(startAge, initial, retired);
}

int main(void) {
    retire_info working = {
        .months = 489, .contribution = 1000, .rate_of_return = 4.5};
    retire_info retired = {
        .months = 384, .contribution = -4000, .rate_of_return = 1};
    int startAge = 327;
    double initial = 21345;
    retirement(startAge, initial, working, retired);
    return EXIT_SUCCESS;
}
