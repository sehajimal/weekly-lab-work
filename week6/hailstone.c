#include <stdio.h>
#include <stdlib.h>

void hailstone(long n) {
    if (n <= 0){
        puts("Number must be greater than zero");
        return;
    }
    if (n == 1) {
        printf("1");
        puts("\n");
        return;
    }
    printf("%ld ", n);
    if (n%2 == 0){
        n = n/2;
        hailstone(n);
    } else {
        n = 3*n +1;
        hailstone(n);
    }
}

int main() {
    hailstone(3);
}