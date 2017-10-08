/* exer.20 – Implement a function 
void find_all_words(char* str, char* word, char** addrs) 
that, using the function developed in the previous exercise, 
find all the occurrences of a word in a string. 
The function should populate the array addrs with the all the addresses 
of the word found in str. Ensure that the array addrs has enough 
space to accommodate all the possible addresses.*/
 
#include <stdio.h>
#include "find_all_words.h"
#define n 38
int main()
{

	char word[4]={"ola"};
	char str[38]={"polafoaaeefplolakolahgolaaedhdholatjz"};
	char *addrs[38];
	printf("xx");
	find_all_words(str,word,addrs);
	/*int i;
	for (i=0;**addrs!=0;i++){
		printf("xxx-> %c",**addrs);
	}*/
	
	return 0;
}


