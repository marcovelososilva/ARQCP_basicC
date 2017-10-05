/* exer.06 – Implement a function void power_ref(int* x, int y) 
 * that calculates the power xy. 
 * The result should be placed at the address indicated in the 
 * first parameter, changing its initial value.*/
#include <stdio.h>
#include "power.h"

int main (){
	//inicialize the variables
	int x, y;
	//read two int from keyboard
	printf("\n EXERCISE 06:\nPlease the base number:\n");
	scanf("%d", &x);
	printf("Please the power number:\n");
	scanf ("%d", &y);
	//send the two int to the funtion
	power_ref (&x, y);
	//print que new string without UPPERCASES on it
	if (x<0){
		printf("the result was to big to fit in an int the result however is: %d\n", x);
	} else {
		printf("the result is: %d\n", x);
	}
	printf("\nTHANKS\n");
	return 0;
}
