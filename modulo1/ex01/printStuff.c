#include <stdio.h>
#include "printStuff.h"

float printStuff(int x)
{
	int *xPtr;
	xPtr=&x;
	return *xPtr + 3;
	
}

