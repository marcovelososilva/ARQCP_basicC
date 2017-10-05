void capitalize(char *str){
	int i;
	int bool = 1;
	for (i=0; *str!='\0'; str++){
		if ( bool == 1){
			if ( *str >= 97 && *str <= 122){
				*str = *str-32;
			}
			bool = 0;
		} else {
			if (*str == ' '){
				bool = 1;
			}
		}
		i++;
	}
}
