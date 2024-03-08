#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

void check(int * array, size_t n, size_t expected_ans) {
    if (maxSeq(array, n) != expected_ans) {
        printf("A broken case found\n");
        exit(EXIT_FAILURE);
    }
}

int main(void) {}
