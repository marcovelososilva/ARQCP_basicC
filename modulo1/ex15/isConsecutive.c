#include "isConsecutive.h"

int isConsecutive(int a,int b,int c)
{
	if((b-a)==1){
		if ((c-b)==1){
			return 1;
		}
	}
	return 0;
}


