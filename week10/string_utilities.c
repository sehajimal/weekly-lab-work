#include <string.h>
#include <stdlib.h>


void to_upper(char *s)
{
    for(int i=0; i<strlen(s); i++)
    {
        if (s[i] >= 97 && s[i]<=122)
        {
            s[i] -=32;
        }
    }
}

char *to_lower_pure(char *s)
{
    char *inputCopy = malloc(strlen(s) +1);
    for(int i=0; i<strlen(s); i++)
    {
        if (s[i] >= 65 && s[i]<=90)
        {
            s[i] +=32;
            inputCopy[i] = s[i];
        }

        else
        {
            inputCopy[i] = s[i];
        }
    }

    return inputCopy;
}

void find_content(char *s, char **first, char **last)
{
    *first = NULL;
    *last = NULL;

    while (*s != '\0') {
        if (*s != ' ' && *s != '\t' && *s != '\n') {
            *first = (char *)s;
            break;
        }
        s++;
    }

    char *end = s;
    while (*end != '\0') {
        if (*end != ' ' && *end != '\t' && *end != '\n') {
            *last = (char *)end;
        }
        end++;
    }

    if (*first == NULL || *last == NULL) {
    *first = *last = (char *)s + strlen(s);
    }
}

char *trim(char *s) 
{
    char *first; 
    char *last;
    find_content(s, &first, &last);

    int length = (last - first) + 1;

    char *new = malloc(length + 1);
    if (new == NULL) 
    {
        return NULL;
    }

    strncpy(new, first, length);
    new[length] = '\0';

    return new;
}