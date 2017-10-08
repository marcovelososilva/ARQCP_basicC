#include <stdio.h>
#include "find_word.h"



void find_all_words(char* str, char* word, char** addrs)
{
	char *initial_addr;
	initial_addr=str;
		
	while(initial_addr!=NULL){

		initial_addr=find_word(str,word,initial_addr);
		if(initial_addr==NULL){
			break;
		}
		printf("\n endereco -> %p",initial_addr);
		*addrs=initial_addr;
		addrs++;

		initial_addr++;

	}
}
