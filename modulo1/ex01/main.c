/*
 1 – Implement a program which declares the following variables:
int x = 5;
int* xPtr = &x;
float y = *xPtr + 3;
int vec[] = {10, 11, 12, 13};
The program should print:
• The value of x and y
• The address (in Hexadecimal) of x and xptr
• The value pointed by xptr
• The address of vec
• The values of vec [0], vec [1], vec [2] and vec [3]
• The addresses of vec [0], vec [1], vec [2] and vec [3]
a) Analyze the information that appears on the screen.
b) Explain the relationship between the addresses of vec, vec[0], vec[1] and vec[2].
c) If the program was run in different computers, would you expect to see the same
or different addresses of the variables? 
 *
 * 
*/



#include <stdio.h>
#include "printStuff.h"

int main()
{
	int x = 5;
	int vec[] = {10, 11, 12, 13};
	int *xPtr;
	xPtr=&x;
	float y=printStuff(x);
	int i=0;
	printf ("value of x %d \n",x);
	printf ("value of y %f \n",y);
	printf ("Address of x %p \n",xPtr);
	printf ("Address of xPtr %p \n",&xPtr);
	printf ("Value pointed by xptr %d \n", *xPtr);
	printf ("Address of vec %p \n",&vec);
	for (i=0; i<4;i++){
		printf ("value of v%d - %d ",i, vec[i]);
		printf ("Adress of v%d - %p \n",i,&vec[i]);
	}
	return 0;
}

