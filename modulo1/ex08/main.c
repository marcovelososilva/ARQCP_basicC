/*
 * 7 – Implement a function void array_sort(int *vec, int n) that, given the address of an integer
array, orders the same array in ascending order. The content of the array after sorting should
be printed in the main function
* 8 – Implement a new function to solve the previous exercise using pointer arithmetic..s
 */

#include <stdio.h>
#include "array_sort_pointer.h"
#define N 11

int main(){
	int vec[N] = {10,12,11,13,9,14,16,27,8,21,20};
	array_sort(vec,N);
	int i;
	printf("Ascending Array Sorted\n");
	for (i=0;i<N;i++){
		printf("numero - %d - %d\n",i, *(vec+i));
	}
	return 0;
}

