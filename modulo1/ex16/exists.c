#define NULL 0;

char* where_exists(char* str1, char* str2){
	char *start = NULL;
	char *inistr1 = str1;
	int bool = 0;
	while (*str2 != '\0'){
		if (*inistr1 != '\0'){
			if ( *inistr1 == *str2 ){
			 	if (bool == 0){
					start = str2;
				}
				inistr1++;
				str2++;
				bool ++;
			} else {
				bool = 0;
				start = NULL;
				inistr1 = str1;
				//str2++;
			}
		}else{
			return start;
		}
	}
	return start;
}
