#include <stdio.h>


char* find_word(char* str, char* word, char* initial_addr)
{
	char *tempword=word;
	char *location=NULL;
	int bol=0;
	while(*tempword!='\0'){	
		if (*tempword>96 && *tempword<123){
			*tempword=*tempword-32;
		}
		tempword++;
	}

	tempword=word;		
	while(*initial_addr!='\0'){	
		if (*tempword!='\0'){
			if (*initial_addr>96 && *initial_addr<123){
				*initial_addr=*initial_addr-32;
			}
			if (*initial_addr==*tempword){
				if (bol==0){
					location=initial_addr;
				}
				bol++;
				initial_addr++;
				tempword++;
			}else{
				bol=0;
				initial_addr++;
				tempword=word;
				location=NULL;
			}
		}else{
			return location;
		}	
	}
	return location;
}
	
	 
