void mystrcpy(char *a, char *b) {
	
	char *p = a;
	
	while(*b) {
		
		*p = *b++;
		*p++;
	}
	
}
