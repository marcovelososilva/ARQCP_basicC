/* exer.14 – Implement a function void frequencies (float *grades, int n, int *freq) 
 * that receives the address of and array grades with the students’ exam grades at ARQCP 
 * (a float value between 0.0 and 20.0), the number of elements in that array (n), 
 * and the address of a second array (freq) 
 * to be filled with the absolute frequency of the integer part of the grades stored in the array grades. 
 * Use pointer arithmetic to solve this exercise.
 Example:
 the array grades with content 		{8.23,	12.25,	16.45,	12.45,	10.05,	6.45,	14.45,	0.0,	12.67,	16.23,	18.75} 
 should produce a freq array with 	{1, 	0, 		0, 		0, 		0, 		0, 		1, 		0, 		1, 		0, 		1, 		
 * 									 0, 	3, 		0, 		1, 		0, 		2, 		0, 		1, 		0, 		0} */
 
#include <stdio.h>
#include "frequencies.h"

int main (){
	//inicialize the variables
	int students = 11;
	float grades [11] = {8.23,	12.25,	16.45,	12.45,	10.05,	6.45,	14.45,	0.0,	12.67,	16.23,	18.75} ;
	int freq [21];

	//send the array to the function
	frequencies (&grades[0], students, &freq[0]);
	
	//print the anwser
	int j;
	printf("\nTHE FREQUENCY\n");
	for (j = 0; j < 21; j++){
		printf("GRADE: (%i), FREQUENCY: %i\n", j, freq[j]);
	} 
	printf("\nTHANK YOU\n");
	return 0;
}
