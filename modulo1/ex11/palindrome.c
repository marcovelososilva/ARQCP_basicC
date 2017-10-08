#include <stdio.h>
#include "palindrome.h"

int palindrome(char *src)
{

	/*funcao saber o tamanho da string
* 	 */
	int length=0;
	while( *(src+length)!=*("")) {
		length++;
	}

	/*
	 * funcao para tirar os espaços
	 */
	char tempChar[100];
	char *tempCharPtr;
	tempCharPtr=&tempChar[0];
	
	int k;
	int n=0;
	for (k=0;k<length;k++){
		if (*(src+k)!=*(" ")) {
			*(tempCharPtr+n)=*(src+k);	
			n++;
		}
    }

	/*
	funcao para passar para maiusculas
	 */
	int y=0;
	for (y=0;y<n;y++){
		if (*(tempCharPtr+y)>96 && *(tempCharPtr+y)<123){
			*(tempCharPtr+y)=*(tempCharPtr+y)-32;
		}
	}

	/*
	 funcao para ver se e palindrome 
	*/
	int b=0;
	for (b=0;b<n-1;b++){
		if (*(tempCharPtr+b)!=*(tempCharPtr-b+n-1)){
			return 0;
		}
	}
	return 1;
}

