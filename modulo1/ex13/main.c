/*
*
13 – Using pointer arithmetic, implement a function that receives three parameters: the
address of a string (str), a character (c) and the address of an empty integer array (vec). The
function should iterate through str looking for the character c. Whenever it finds the desired
character it should add to vec the index where the character was found in the string. The final
content of vec should be printed in the main function. Ensure that the size of the integer array
vec is enough to accommodate all occurrences of c in str.
* 
*/

#include <stdio.h>
#include "foundwhere.h"

int main()
{
	
	char string[] = {"Never odd or even"};
	char *strPtr;
	strPtr=&string[0];
	char c='o';
	int length=0;
	/*
	 * calculation of the length of the string
	 */
	while( *(strPtr+length)!=*("")) {
		length++;
	}
	/*
	 * assure that the vec has the right lenght
	 */
	int vec[length];
	int *vecPtr;
	vecPtr=&vec[0];
	int encontrou=foundwhere(strPtr,c,vecPtr);
	printf("the character ' %c ' was found in %d positions\n",c,encontrou);
	int i;
	printf("the position(s) of the found character were: \n");
	for (i=0;i<encontrou;i++){
		printf("Position - %d\n",*(vecPtr+i));
	}
	return 0;
}

