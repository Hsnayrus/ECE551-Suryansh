#include <stdio.h>
#include <stdlib.h>

/*
{}
0, 1, 2
2, 1, 0
1, 2, 1
1, 1, 2
*/
size_t maxSeq(int * array, size_t n) {
    if (n == 0 || n == 1) {
        return n;
    }
    size_t maxSeq = 1;
    size_t currMaxSeq = 1;
    for (size_t i = 1; i < n; i++) {
        if (array[i] > array[i - 1]) {
            currMaxSeq++;
        } else {
            if (currMaxSeq > maxSeq) {
                maxSeq = currMaxSeq;
            }
            currMaxSeq = 1;
        }
    }
    if (currMaxSeq > maxSeq) {
        maxSeq = currMaxSeq;
    }
    return maxSeq;
}
