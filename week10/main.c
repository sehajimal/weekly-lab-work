#include <stdio.h>
#include <stdlib.h>
#include "string_utilities.h"
#define INPUT_SIZE 1000

int main()
{
    char input[INPUT_SIZE+1];
    while (fgets(input, INPUT_SIZE, stdin)) 
    {
        to_upper(input);
        printf("%s", input);

        char *inputCopy = to_lower_pure(input);
        printf("%s", inputCopy);
        free(inputCopy);

        char *test2 = "   Sehaj Ajimal   ";
        char *new = trim(test2);
        printf("%s", new);
        free(new);
    }
}