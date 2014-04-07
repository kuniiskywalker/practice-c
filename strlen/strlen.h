unsigned long mystrlen(char *str)
{
	
	/*
	unsigned long i;
	
	for(i=0; i<str[i]; i++);
	
	return i;
	*/
	
	char *p = str;
	
	for(; *p; ++p);
	
	printf("%d %d", p, str);
	
	return (p - str);
	
	
}
