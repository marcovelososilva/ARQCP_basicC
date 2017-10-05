/* exer.18 – Implement a function 
void compress_shorts(short* shorts, int n_shorts, int* integers) 
to "compress" the values of an array of shorts into an array of integers. 
The function must, in a sequential manner, compress two consecutive shorts 
into a single integer that must be stored in the array integers. 
Assume that the number of elements in the array shorts is even. 
The content of the integer array must be printed in the main function.*/
 
#include <stdio.h>
#include "compress.h"

int main (){
	//inicialize the variables
	int n_shorts = 10;
	short shorts[10] = { 10, 12, 13,15,17,9,7,81,93,2};
	int integers[5];
	
	
	//call funtion
	compress_shorts (shorts, n_shorts, integers);
	
	//print the shorts
	int i;
	printf("THE SHORTS ARRAY\n");
	for (i = 0; i < n_shorts; i++){
		printf("%d \t", shorts[i]);
	} 
	//print the integers
	int j;
	printf("\nTHE INTEGERS ARRAY as integers\n");
	for (j=0; j<5; j++){
		printf ("%d\n", integers[j]);
	}
	int k = 0;
	printf("\nTHE INTEGERS ARRAY as shorts\n");
	short *printintegers = (short *) integers;
	while (k < n_shorts){
		printf ("%d\n", *printintegers);
		k++;
		printintegers++;
	}
	
	printf("\nTHANK YOU");
	
	return 0;
}
