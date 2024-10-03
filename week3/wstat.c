#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    double lines;
    double words;
    double characters;
    double average;
	
    while (true) {
    int result = scanf("%d %d %d", &lines, &words, &characters);

    if (result == 0){
	fprintf(stderr, "Bad Value\n");
        return EXIT_FAILURE;
    }

    if (result == EOF) {
        break;
    }

    average = (characters)/lines;

    printf("%.1f \n", average);

    return EXIT_SUCCESS;
    }
}
