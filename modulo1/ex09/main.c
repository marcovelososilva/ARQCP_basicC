/*
* 9 – Implement a function int sort_without_reps(int *src, int n, int *dest) that receives the
address of an array src with n integer elements and the address of an empty second array of
the same size. The function should fill the second array with the elements of the first in
ascending order, eliminating all repeated values. The function must return the number of
items placed in the second array. The content of the second array should be printed in the
main function.
* 
*/

#include <stdio.h>
#include "sort_without_reps.h"

int main()
{

	int vec[] = {1,2,3,4,5,1,3,2,4,6,7};
	int *src;
	int g;
	src=&vec[0];
	int n=(sizeof vec)/(sizeof vec[0]);
	int newVec[n];
	int *dest;
	dest=&newVec[0];
	printf("size%d",n);
	
	
	int nsv=sort_without_reps(src, n, dest);
	printf("valores repetidos - %d\n", nsv);
	printf("retirar os copiados\n");
	for (g=0;g<n-nsv;g++){
		printf("valor %d\n",*(dest+g));
	}
	
	return 0;
}

