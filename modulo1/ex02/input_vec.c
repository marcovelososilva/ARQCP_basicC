#include <stdio.h>

void fill_vec(int* vec, int n){
	int i, temp;
	printf("please insert the values:\n");
	
	for (i = 0; i < n; i++) {
		printf("value number %i:  ", i);
        scanf("%i", &temp);
        *vec = temp;
        vec++;
    }
}
