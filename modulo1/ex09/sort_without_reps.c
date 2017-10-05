#include <stdio.h>
#include "sort_without_reps.h"

int sort_without_reps(int *src, int n, int *dest)
{
	int i;
	int m;
	int l;
	printf("o inicio \n");
	int g;
	for (g=0;g<n;g++){
		printf("\n valor %d",*(src+g));
	}
	int temp;
	printf("o fim \n");
	
	for (m=0;m<n-1;m++){
		for (l=1;l<n;l++){
			if (*(src+l)<*(src+m)){
				temp=*(src+l);
				*(src+l)=*(src+m);
				*(src+m)=temp;
			}
		}
	}
	
	printf("inicio - ordenados\n");
	for (g=0;g<n;g++){
		printf("\n valor %d",*(src+g));
	}
	int k=0;
	printf("\nfim - ordenados\n");
	for (i=0;i<n-1;i++){
		if (*(src+i)!=*(src+i+1)){
			*(dest+k)=*(src+i);
			k++;			
		}
	}

	
	return n-k;
}

