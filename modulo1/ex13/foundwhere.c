#include <stdio.h>
#include "foundwhere.h"

int foundwhere(char *strPtr,char c ,int *vecPtr)
{
	int i=0;
	int k=0;
	while(*strPtr!='\0'){
		if (*strPtr==c){
			*vecPtr=i;
			vecPtr++;
			k++;
		}
		i++;
		strPtr++;
	}
	return k;
}

