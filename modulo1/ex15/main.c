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

int main()
{
	int vetor[100];
	int i=0;
	int *vetorPTR;
	vetorPTR=&vetor[0];

	/*
	 * funcao para gerar 100 numeros aleatorios
	 */
	while(i<100){
		printf("%d",i);
		*(vetorPTR+i)=rand() %20;
		i++;
	}
	
	
	/*
	 * criar uma funcao para ver se os tres inteiros sao seguidos ou nao
	 */ 
	 
	/*
	 * funcao para ver se existem tres numeros consecutivos
	 */
	
	
	while(i<3){
		if (*(vetorPTR+i)-*(vetorPTR+i+1)==1){
			if (*(vetorPTR+i+1)-*(vetorPTR+i+2)==1){
					return 1;
			}
		}
	}
	
	return 0;
}


