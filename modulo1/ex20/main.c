/* exer.20 – Implement a function 
void find_all_words(char* str, char* word, char** addrs) 
that, using the function developed in the previous exercise, 
find all the occurrences of a word in a string. 
The function should populate the array addrs with the all the addresses 
of the word found in str. Ensure that the array addrs has enough 
space to accommodate all the possible addresses.*/
 
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
