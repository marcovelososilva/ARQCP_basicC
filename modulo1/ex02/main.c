/*2 – Implement a function void fill_vec(int *vec, int n) 
 * that, through the use of pointers, 
 * stores a set of 20 integers (read from the keyboard) into a vector.*/

#include <stdio.h>
#include "input_vec.h"

int main( ) {
	//initialize the variables
	int vector[20];
	int n = 20;
	//call the funtion
	fill_vec(&vector[0], n);
	//output the results to confirmation
	int j;
	printf("the inputed values were:\n indice-valor\n");
	for (j= 0; j < 10; j++){
		printf("%d-%d \t |%d-%d \t\n", j, vector[j], j+10, vector[j+10]);
	}
	printf("\nTHANK YOU\n");
   

   return 0;
}
