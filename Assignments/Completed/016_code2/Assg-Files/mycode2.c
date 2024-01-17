#include <stdio.h>
int printTriangle(int size) {
    // start with starCount being 0
    int startCount = 0;
    // count from 0 (inclusive) to size (exclusive), for each number i that you
    for (int i = 0; i < size; i++) {
        // count count from 0 (inclusive) to i (inclusive), for each number j
        // that
        for (int j = 0; j <= i; j++) {
            // you count print a "*" increment starCount when you finish
            // counting on j,
            printf("*");
        }
        starCount++;
    }
    printf("\n");
    // print a newline ("\n")
    // when you finish counting on i,
    // your answer is starCount
    return starCount;
}

int main(void) {
    int numStars;
    printf("Here is a triangle with height 4\n");
    numStars = printTriangle(4);
    printf("That triangle had %d total stars\n", numStars);
    // now print "Here is a triangle with height 7\n"
    printf("Here is a triangle with height 7\n");
    // then call printTriangle, passing in 7, and assign the result to numStars
    numStars = printTriangle(7);
    // finally, print "That triangle had %d total stars\n", such that the %d
    // prints the value of numStars
    print("That triangle had %d total stars\n", numStars);
    return 0;
}
