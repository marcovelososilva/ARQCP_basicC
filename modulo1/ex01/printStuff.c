#include <stdio.h>

int printStuff()
{
	int x = 5;
	int *xPtr;
	xPtr=&x;
	int vec[] = {10, 11, 12, 13};

	float y = *xPtr + 3;
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
	};
	return 0;
}

