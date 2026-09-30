#include <stdio.h>
#include <stdlib.h>

int max_depth_seen = 0;

int factorial(int n, int depth) {
    printf("Called factorial(%d)\n", n);

    if (depth > max_depth_seen) {
        max_depth_seen = depth;
    }

    // Base Case
    if (n <= 1) {
        printf("Base case: returning 1\n");
        return 1;
    }

    //Recursive case
    int result = n * factorial(n-1, depth + 1); //incrementing depth with each iteration
    printf("Returning %d from factorial(%d) at depth %d\n", result, n, depth);
    return result;
}

int main() {
    factorial(4, 0);
}