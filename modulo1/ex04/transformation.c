void transformation (char *ptr){
	//in each of the string char's, until the end
	while (*ptr != '\0'){
		//verify if the char is an UPPERCASE - ASCII mode
		if (*ptr >= 97 && *ptr <= 123){
			*ptr = *ptr-32;
		}
		//increments the pointer to the next char
		ptr++;
	}
}
