#include <stdio.h>
#include <stdlib.h>
#include "fillRandomValues.h"

void fillRandomValues(int *vetorPTR)
{
	/*
	 * funcao para gerar 100 numeros aleatorios e acrescentar ao vetor de 100 unidades
	 */
	int i=0;
	for (i=0;i<100;i++){
		*(vetorPTR)=rand() %20;
		vetorPTR++;
	}
}


