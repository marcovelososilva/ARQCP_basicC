/*
 * 7 – Implement a function void array_sort(int *vec, int n) that, given the address of an integer
array, orders the same array in ascending order. The content of the array after sorting should
be printed in the main function.
 * 
 */

#include <stdio.h>
#include "array_sort.h"

int main()
{

	int vec[] = {10,12, 11, 13,9,14,16,27,8,21,20};
	int *vecPTR;
	vecPTR=&vec[0];
	int n=(sizeof vec)/(sizeof vec[0]);
	array_sort(vecPTR,n);
	int i;
	printf("Ascending Array Sorted\n");
	for (i=0;i<n;i++){
		printf("numero - %d - %d\n",i, *(vecPTR+i));
	}
	return 0;
}

