/*
19 – Implement a function char* find_word(char* str, char* word, char* initial_addr) to search
for a word in a string and returns the address in which it was found, or NULL otherwise. The
function must find words whether in upper or lower case (consider that the string has only
letters and spaces). The function receives in initial_addr the address within the string from
which the search should be initiated.
*/

#include <stdio.h>
#include "find_word.h"

int main()
{
	char word[4]={"ola"};
	char str[14]={"pdfoaaeefplae"};
	
	char *initial_add;
	initial_add=&str[2];
	
	printf("inicio \n");

	char *as=find_word(str,word,initial_add);
	printf("\n word - %p",as);
	return 0;
}


