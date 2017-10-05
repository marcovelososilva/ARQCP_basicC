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
	char wordfull[3]={"ola"};
	char strings[13]={"pdfoaaeefolae"};
	
	char *str;
	char *word;
	char *initial_add;
	char *find;
	str=&strings[0];
	word=&wordfull[0];
	printf("word %c \n",*(word+4));
	initial_add=&strings[5];
		printf("s \n");
	find=find_word(str,word,initial_add);
		printf("\n s");
	return 0;
}


