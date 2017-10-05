#include <stdio.h>
#include "find_word.h"

char* find_word(char* str, char* word, char* initial_addr)
{
	char k;

	while (*str!='\0'){
		if (str==initial_addr){
			while(*initial_addr!='\0'){
				if (*initial_addr==*word){
					while (*word!='\0' || k=='a'){
						if (*initial_addr>96 && *initial_addr<123){
							*initial_addr=*initial_addr-32;
						}
						if (*word>96 && *word<123){
							*word=*word-32;
						}
						if (*initial_addr!=*word){
							k='a';
						}else{
							word=word+1;
							initial_addr=initial_addr+1;					
						}
					}
					if (k=='a'){
						return 0;
					}
					return initial_addr;
				}else{
					initial_addr++;
				}						
			}
		}else{
			str++;
		}
	}
	return NULL;
}		 
