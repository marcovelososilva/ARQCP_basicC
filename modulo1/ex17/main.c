/*
17 – Implement a function void swap(int* vec1, int* vec2, int size) that receives the address of
two arrays of the same size and swaps the contents of both arrays (i.e contents of vec1 will be
copied to vec2 and vice versa). The new content of each array must be printed in the main
function.
*/

#include <stdio.h>


int main()
{
	int vector1[3]={1,2,3};
	int vector2[3]={4,5,6};
	int i=0;
	int *vec1;
	int *vec2;
	vec1=&vector1[0];
	vec2=&vector2[0];
	int size=sizeof(vector1)/sizeof(vector1[1]);

	/*
	 * funcao para trocar os vetores
	 */
	int temp; 
	for (i=0;i<size;i++){
		temp=*(vec1+i);
		*(vec1+i)=*(vec2+i);
		*(vec2+i)=temp;
	}
	for (i=0;i<size;i++){
			printf("%d",*(vec2+i));
	}
	
	
	
	return 0;
}


