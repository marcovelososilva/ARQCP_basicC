/*
 * 
 * 5 – Implement a new function to solve the previous exercise using pointer arithmetic.
 */

#include <stdio.h>
#include "transformation.h"

int main()
{

	char string[4]={"ola"};
	char *addressString;
	addressString=&string[0];
	transformation(addressString);
	
	while (*addressString!='\0'){
		printf(" %c \n",*addressString);
		addressString++;
	}
	return 0;
}

