/* exer.10 – Using pointer arithmetic, 
 * implement a function that receives the address of an 
 * array of integer values as its single parameter. 
 * The first element of the array indicates how many elements are stored on it. 
 * The function should return the sum of the even elements of the array 
 * (excluding its first element).
 * 
 * ????I DONT UNDERSTAND what means excluding the first element the 0 or the 1
 * the 0 was already excuded because was the flag should i exclude alse the number 2
 * start counting in the number 4????*/
 
#include <stdio.h>
#include "sum_even.h"

int main (){
	//inicialize the variables
	int size;
	//ask how many number want to introduce
	printf("How many number do you want to introduce?\n");
	scanf("%i", &size);
	size++;
	int x [size];
	x[0] = size;
	//read the int from keyboard to the array
	int i;
	for (i = 1; i < size; i++){
		printf("the number (%i), please: ",i);
		scanf("%i", &x[i]);
	} 
	//send the array to the function
	int sum;
	sum = even_sum (&x[0]);
	//print the anwser
		printf("the sum of all even elements that were introduced was: %i\n", sum);
		printf("THANK YOU\n");
	return 0;
}
