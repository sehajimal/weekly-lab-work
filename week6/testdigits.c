/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */

#include <stdio.h>
#include <stdlib.h>
#include "digits.h"

int main() {
    int min, max, sum;
    long n;

    n = 425434;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 5 && min == 2 && sum == 22) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
