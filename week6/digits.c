/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int digits(long n, int *maximum, int *minimum){
	int sum  = 0;
	*maximum = 1;
	*minimum = 9;
	while(n>0){
		int digit = n%10;
		sum +=digit;
		if  (digit >*maximum){
			*maximum = digit;
		}
		if  (digit <*minimum){
            *minimum = digit;
        }
		n = n/10;
	}
	return sum;
}

