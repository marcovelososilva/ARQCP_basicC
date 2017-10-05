/* exer.04 - Implement a function that, given the address of a string, 
 * replaces all lowercase letters by their uppercase counterpart. 
 * Your function should not use other functions 
 * available in the C standard library.*/
#include <stdio.h>
#include "transformation.h"

int main (){
	//inicialize the variables
	char word [255];
	//read a string from keyboard
	printf("\n EXERCISE 04:\nPlease the word should be transformed:\t(255 characters max...)\n");
	scanf("%s", word);
	//send the string to the funtion to be transformed
	transformation (&word[0]);
	//print que new string without UPPERCASES on it
	printf("The new string without UPPERCASES is: %s\n", word);
	printf("\nTHANKS\n");
	return 0;
}
