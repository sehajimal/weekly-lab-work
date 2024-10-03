#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char str[10000];
    while (true) {
	
        int result = scanf("%s", &str);
        if (result == 0) {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF)
            break;
        printf("%s\n",str);
    }
    return EXIT_SUCCESS;
}

