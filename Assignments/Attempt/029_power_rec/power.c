#include <stdio.h>
#include <stdlib.h>

unsigned power(unsigned x, unsigned y) {
    if (x == 0 || y == 0) {
        return 1;
    }
    return power(x, y - 1) * x;
}

/* int main(void) { */
/*     Unsigned int x = 9; */
/*     Unsigned int y = 0; */
/*     printf("(%u ^ %u): %u\n", x, y, power(x, y)); */
/*     return EXIT_SUCCESS; */
/* } */
