/* exer.12 – Using pointer arithmetic, implement a function to 
capitalize the words of a sentence. 
The function should receive the address of a string, 
changing it accordingly. 
The new content should be printed in the main function.
Examples:
• "The number must be saved" → "The Number Must Be Saved"
• "The maximum value of this CYCLE" → "The Maximum Value Of This CYCLE"*/
 
#include <stdio.h>
#include "capitalize.h"

int main (){
	//inicialize the variables
	char str1 [25] = ("The number must be saved");
	char str2 [32] = ("the maximum value of this CYCLE");
	
	//print the original
	printf("The string was:\n- %s \n- %s \n", str1, str2);
	
	//call funtion
	capitalize(&str1[0]);
	capitalize(&str2[0]);
	
	//print the changes
	printf("The string now is:\n%s\n%s", str1, str2);
	
	printf("\nTHANK YOU\n");
	
	return 0;
}
