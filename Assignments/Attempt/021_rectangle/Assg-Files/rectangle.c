#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// I've provided "min" and "max" functions in
// case they are useful to you
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// Declare your rectangle structure here!
typedef struct _rectangle {
    int x;
    int y;
    int width;
    int height;
} rectangle;

rectangle canonicalize(rectangle r) {
    // This function makes sure that a rectangle does not have negative width or
    // height

    if (r.width < 0) {
        r.x += r.width;
        r.width *= -1;
    }
    if (r.height < 0) {
        r.y += r.height;
        r.height *= -1;
    }
    return r;
}

int areIntersecting(rectangle r1, rectangle r2) {
    int ans = 0;
    int lower_limit_x = r2.x;
    int upper_limit_x = r2.x + r2.width;
    int lower_limit_y = r2.y;
    int upper_limit_y = r2.y + r2.height;
    if (((lower_limit_x <= r1.x) || (r1.x <= upper_limit_x)) &&
        ((lower_limit_y <= r1.y) || (r1.y <= upper_limit_y))) {
        ans = 1;
    }
    return ans;
}

rectangle intersection(rectangle r1, rectangle r2) {
    // WRITE THIS FUNCTION;
    rectangle tempR1 = {
        .x = r1.x, .y = r1.y, .width = r1.width, .height = r1.height};
    int interesecting = areIntersecting(tempR1, r2);
    // Proceed further since the rectangles are intersecting
    if (ans == 1) {
        r1.x = max(tempR1.x, r2.x);
        r1.y = max(tempR1.y, r2.y);
        r1.width = min(tempR1.x + tempR1.width, r2.x + r2.width) - r1.x;
        r1.height = min(r2.y + r2.height, tempR1.y + tempR1.height) - r1.y;
    }
    return r1;
}

// You should not need to modify any code below this line
void printRectangle(rectangle r) {
    r = canonicalize(r);
    if (r.width == 0 && r.height == 0) {
        printf("<empty>\n");
    } else {
        printf("(%d,%d) to (%d,%d)\n", r.x, r.y, r.x + r.width, r.y + r.height);
    }
}

int main(void) {
    rectangle r1;
    rectangle r2;
    rectangle r3;
    rectangle r4;

    r1.x = 2;
    r1.y = 3;
    r1.width = 5;
    r1.height = 6;
    printf("r1 is ");
    printRectangle(r1);

    r2.x = 4;
    r2.y = 5;
    r2.width = -5;
    r2.height = -7;
    printf("r2 is ");
    printRectangle(r2);

    r3.x = -2;
    r3.y = 7;
    r3.width = 7;
    r3.height = -10;
    printf("r3 is ");
    printRectangle(r3);

    r4.x = 0;
    r4.y = 7;
    r4.width = -4;
    r4.height = 2;
    printf("r4 is ");
    printRectangle(r4);

    // test everything with r1
    rectangle i = intersection(r1, r1);
    printf("intersection(r1,r1): ");
    printRectangle(i);

    i = intersection(r1, r2);
    printf("intersection(r1,r2): ");
    printRectangle(i);

    i = intersection(r1, r3);
    printf("intersection(r1,r3): ");
    printRectangle(i);

    i = intersection(r1, r4);
    printf("intersection(r1,r4): ");
    printRectangle(i);

    // test everything with r2
    i = intersection(r2, r1);
    printf("intersection(r2,r1): ");
    printRectangle(i);

    i = intersection(r2, r2);
    printf("intersection(r2,r2): ");
    printRectangle(i);

    i = intersection(r2, r3);
    printf("intersection(r2,r3): ");
    printRectangle(i);

    i = intersection(r2, r4);
    printf("intersection(r2,r4): ");
    printRectangle(i);

    // test everything with r3
    i = intersection(r3, r1);
    printf("intersection(r3,r1): ");
    printRectangle(i);

    i = intersection(r3, r2);
    printf("intersection(r3,r2): ");
    printRectangle(i);

    i = intersection(r3, r3);
    printf("intersection(r3,r3): ");
    printRectangle(i);

    i = intersection(r3, r4);
    printf("intersection(r3,r4): ");
    printRectangle(i);

    // test everything with r4
    i = intersection(r4, r1);
    printf("intersection(r4,r1): ");
    printRectangle(i);

    i = intersection(r4, r2);
    printf("intersection(r4,r2): ");
    printRectangle(i);

    i = intersection(r4, r3);
    printf("intersection(r4,r3): ");
    printRectangle(i);

    i = intersection(r4, r4);
    printf("intersection(r4,r4): ");
    printRectangle(i);

    return EXIT_SUCCESS;
}
