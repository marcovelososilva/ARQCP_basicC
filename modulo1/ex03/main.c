/*
 * 3 – Implement a function that, given an array of integer values, prints all its even elements.
The function should receive two parameters: the address of the array and an integer that
indicates the number of elements in that array.
*/

#include <stdio.h>
#include "printEvenNumbersArray.h"

int main()
{
	int vec[] = {10,11, 12, 13, 14, 15,16,17,18,19,20};
	int *xPtr;
	xPtr=vec;
	printEvenNumbersArray(xPtr);
	int b = sizeof xPtr;
	printf("ola %d\n",b);
	return 0;
}

