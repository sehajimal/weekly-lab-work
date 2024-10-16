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
    char *month = "";
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

    switch(storea){
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;

        case 3:
            month = "March";
            break;

        case 4:
            month = "April";
            break;

        case 5:
            month = "May";
            break;

        case 6:
            month = "June";
            break;

        case 7:
            month = "July";
            break;

        case 8:
            month = "August";
            break;

        case 9:
            month = "September";
            break;

        case 10:
            month = "October";
            break;

        case 11:
            month = "November";
            break;

        case 12:
            month = "December";
            break;
    }


    printf("The earliest valid date is %d %s, %d.\n", storeb, month, storec);
    return EXIT_SUCCESS;
}

