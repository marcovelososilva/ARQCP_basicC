#include <stdio.h>

void array_sort(int *vecPTR, int n){

	int i;
	int k;
	int temp;
	for (i=0;i<n;i++){
		for (k=0;k<n;k++){
			if (*(vecPTR+i)<*(vecPTR+k)){			
				temp=*(vecPTR+k);
				*(vecPTR+k)=*(vecPTR+i);
				*(vecPTR+i)=temp;
			}
		}
	}

}

