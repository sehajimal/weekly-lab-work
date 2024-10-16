/* Sehaj Ajimal
 *
 *
 * McMaster University, 400511220
 */


#include <stdio.h>
#include <stdlib.h>

/* Main
 *
 * Uses a do loop to get dates from the user
 *
 */

int main()
{
    int a;
    int b;
    int c;

    int storea = 9999;    //stores the lowest value
    int storeb = 9999;
    int storec = 9999;

    do {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d /%d /%d", &a, &b, &c);

        if (a==0 &b==0 &c==0){
            printf("\n");
        }

        else if (c<storec){
            storec = c;
            storeb=b;
            storea=a;
        }
        else if (c==storec){
            if (a<storea){
                storeb=b;
                storea=a;
            }
            else if(a==storea){
                if (b<storeb){
                    storeb=b;
                }
            }
        }
    } while (a != 0 && b !=0 && c!=0);
    printf("The earliest date is %d/%d/%d.\n", storea, storeb, storec);
    return EXIT_SUCCESS;
}

