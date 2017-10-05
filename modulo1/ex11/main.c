/*
*
* A palindrome is a word or sentence that reads the same forward as it does backward.
Neither spaces nor punctuation are usually taken into consideration when constructing
sentences that are palindromes. Implement a function int palindrome(char *str) function that
verifies if a string, whose address is received as a parameter, is a palindrome or not. The
function should return 1 or 0, depending on whether or not the string reads the same forward
as it does backward, respectively.
Examples:
• Never odd or even
• A man a plan a canal Panama.
• Gateman sees name, garageman sees name tag
* 
*/

#include <stdio.h>
#include "palindrome.h"

int main()
{
	
	char vec[] = {"Never odd or even"};
	char *str;
	str=&vec[0];
	int value;
	value=palindrome(str);
	printf("\nValue -  %d \n", value);
	if (value==0){
		printf("It is a Palindrome\n");
	}else{
		printf("It is not a palindrome\n");
	}
	return 0;
}

