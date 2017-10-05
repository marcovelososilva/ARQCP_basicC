#include <stdio.h>
#include "transformation.h"

void transformation (char *addressString)
{
	while (*addressString!='\0'){
		if (*addressString>96 && *addressString<123){
			*addressString=*addressString-32;
		}
		addressString++;
	}
}

