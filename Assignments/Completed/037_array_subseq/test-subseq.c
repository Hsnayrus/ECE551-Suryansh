#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);
// Function to print an array
void printArray(int * array, size_t n) {
    printf("{");
    for (size_t i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}
void check(int * array, size_t n, size_t expected_ans) {
    size_t currentAns = maxSeq(array, n);
    if (currentAns != expected_ans) {
        printf("Expected: %lu, Got: %lu\nBroken testcase: ", expected_ans,
               currentAns);
        printArray(array, n);
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    int array1[10] = {1, 2, 1, 3, 5, 8, 2, 4, 6, 9};
    int array2[7] = {-1, 0, 1, 2, 4, 3, 5};
    int array3[7] = {1, 1, 1, 3, 5, 8, 1};
    int array4[7] = {-4, -3, -2, -1, 0, -5, -6};
    int array5[5] = {1, 1, 1, 1, 1};
    int array6[6] = {0};
    int array7[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int array8[3] = {3, 2, 1};
    int array9[1] = {2};
    int array10[6] = {-1, -2, -3, 0, 3, 8};
    int array11[12] = {1, 2, 3, 1, 2, 3, 4, 5, 1, 2, 3, 4};
    int * arr12 = NULL;
    check(array1, 10, 4);
    check(array2, 7, 5);
    check(array3, 7, 4);
    check(array4, 7, 5);
    check(array5, 5, 1);
    check(array6, 6, 1);
    check(array7, 8, 8);
    check(array8, 8, 1);
    check(array9, 1, 1);
    check(array10, 6, 4);
    check(array11, 12, 5);
    check(arr12, 0, 0);
    return EXIT_SUCCESS;
}
