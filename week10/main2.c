#include <stdio.h>
#include "string_utilities.h"
#include <stdlib.h>
#define INPUT_SIZE 1000

int main()
{
    char *s = " hello friend ";
    char *first, *last;
    find_content(s, &first, &last);
    printf("%c...%c\n", *first, *last);

    char *test = "      ";
    find_content(test, &first, &last);
    printf("%s\n", test);
    printf("%c...%c\n", *first, *last);
    return 0;

    char *test1 = "    Sehaj    ";
    find_content(test1, &first, &last);
    printf("%s\n", test1);
    printf("%c...%c\n", *first, *last);
    return 0;

    char *test2 = "   Sehaj Ajimal   ";
    char *new = trim(test2);
    printf("%s", new);
    free(new);
}