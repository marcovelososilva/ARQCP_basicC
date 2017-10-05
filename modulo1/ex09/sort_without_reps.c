#include <stdio.h>
#include "sort_without_reps.h"

int sort_without_reps(int *src, int n, int *dest)
{
	int i;
	int m;
	int l;
	int temp;
	printf("o fim \n");
	/*
	 * ordenar
	 */
	for (m=0;m<n;m++){
		for (l=0;l<n;l++){
			if (*(src+l)>*(src+m)){
				temp=*(src+l);
				*(src+l)=*(src+m);
				*(src+m)=temp;
			}
		}
	}
	/*
	 * retirar repetidos
	 */
	int k=0;
	for (i=0;i<n;i++){
		if (*(src+i)!=*(src+i+1)){
			*(dest+k)=*(src+i);
			k++;			
		}
	}

	
	return n-k;
}

