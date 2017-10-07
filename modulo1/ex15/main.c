/*
*
Implement a program to determine how many sets of three consecutive elements exist in
an array of integer values that satisfy the condition vi < vi+1 < vi+2. Create three auxiliary
functions:
• a function to populate an array of 100 integers with random values between 0 and 20;
• a function that verifies if a set of three integers satisfies or not the given condition;
• a function to increment the number of sets.
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "fillRandomValues.h"
#include "numSets.h"

int main()
{

	int vetor[100];
	int *vetorPTR;
	vetorPTR=&vetor[0];

	fillRandomValues(vetorPTR);

	int sets;
	int *setsPtr;
	setsPtr=&sets;
	numSets(vetor,setsPtr);
	
	
	return 0;
}


