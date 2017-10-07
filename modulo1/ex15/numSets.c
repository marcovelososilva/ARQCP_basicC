#include "isConsecutive.h"
#include <stdio.h>

void numSets(int *vetorPTR,int sets)
{
	int i=0;
	int k=0;
	while(i<100){
		if(isConsecutive(*(vetorPTR+i),*(vetorPTR+i+1),*(vetorPTR+i+2))==1){
			k++;
		}
		printf("%d ",*(vetorPTR+i));
		i++;
	}
	printf("xx- %d",k);
	
}

