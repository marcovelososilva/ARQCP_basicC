#include <stdio.h>
#include "printEvenNumbersArray.h"

void printEvenNumbersArray(int *a)
{
	
	int i=0;
	for (i=0;i<11;i=i+2){
		printf ("value of x %d \n",*(a+i));
	}
	return;
	
}

