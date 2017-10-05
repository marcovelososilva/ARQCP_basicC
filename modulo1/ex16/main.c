/*16 – Using pointer arithmetic, implement a function 
char* where_exists(char* str1, char* str2) 
that receives the address of two strings (str1 and str2) 
and determines if the first string exists within the second. 
The function should return a pointer to the beginning of the first 
(or only) occurrence of str1 within str2 or NULL otherwise.*/

#include <stdio.h>
#include "exists.h"

int main ( ) {
	//initialize variable
	char str1 [4] = {"wza"};
	char str2 [8] = {"ywzabcp"};
	char *result;
	//call function
	result = where_exists(&str1[0], &str2[0]);
	
	printf("STRINGS:\n1st- %s;\n2nd- %s\n", str1, str2);
	if (result != 0){
		printf("the 1st string exists in the second and begins on the char: %c\n", *result );
	}else{
		printf("the second string does not contains the 1st.\n");
	}	
	printf("THANK YOU!\n");
	return 0;
}
