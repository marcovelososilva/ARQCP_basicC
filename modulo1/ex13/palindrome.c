#include <stdio.h>
#include "palindrome.h"

int palindrome(char *src)
{

	/*funcao saber o tamanho da string
* 	 */
	int length=0;
	while( *(src+length)!=*("")) {
		printf("value of a: %c\n", *(src+length));
		length++;
	}
	printf("o tamanho %d",length);
	
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
    int y;
    for (y=0;y<n;y++){
		printf("valor xx - %c \n",*(tempCharPtr+y));
	}
	/*
	funcao para passar para minusculas
	 */
	
	/*
	 funcao para ver se e palindrome 
	*/
	int b=0;
	for (b=0;b<n/2;b++){
		if (*(tempCharPtr+b)!=*(tempCharPtr-b+n)){
			return 0;
		}
	}
	return 1;
}

