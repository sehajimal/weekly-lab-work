/* A formatted calendar 
 * 
 * Sehaj Ajimal, October 15, 2024
 */


#include <stdio.h>
#include <stdlib.h>

/* Main
 *
 * Utilizes for loops to output the calendar as shown in the question
 * 
 */

int main() 
{
    int numOfDays;
    int dayOfWeek;
    int count = 0;

    printf("How many days this month? ");
    scanf("%d", &numOfDays);

    printf("What's the starting day (1=Monday, 7=Sunday)? ");
    scanf("%d", &dayOfWeek);
    printf("\n");

    printf(" M  T  W  T  F  S  S\n");

    for(int i=1; i<dayOfWeek; i++)
    {
        printf("   ");
        count += 1;
    }

    for(int i=1; i<=numOfDays; i++)
    {
        if (i <= 9)
        {
            printf(" %d ", i);
            count += 1;
        }

        else
        {
            printf("%d ", i);
            count += 1;
        }
        
        if (count == 7 || count == 14 || count == 21 || count ==28 || count == 35)
        {
            printf("\n");
        }
    }
    printf("\n");
    return EXIT_SUCCESS;
}

