#include <stdio.h>
#include "printEvenNumbersArray.h"

void printEvenNumbersArray(int *a, int size)
{
	
	int i=0;
	for (i=0;i<size;i=i+2){
		printf ("value of posicion %d is %d \n",i+1,*(a+i));
	}
	return;
	
}

