/*
 * 7 – Implement a function void array_sort(int *vec, int n) that, given the address of an integer
array, orders the same array in ascending order. The content of the array after sorting should
be printed in the main function.
 * 
 */

#include <stdio.h>

int main()
{

	int vec[] = {10,12, 11, 13,9,14,16,27,8,21,20};
	int *xPtr;
	xPtr=vec;
	int sizeVec=(sizeof vec)/(sizeof vec[0]);
	printf ("size %d\n",sizeVec);
	printf ("ola %d\n",*(xPtr+1));
	int i=0;
	for (i=0;i<sizeVec;i++){
		if (*(xPtr)>*(xPtr+1+i)){
			
			printf ("yes");
		}
	}
	return 0;
}

