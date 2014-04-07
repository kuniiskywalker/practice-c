char *mystrcat(char *str1, char *str2)
{
	
	char *p1;
	
	for( p1 = str1; *p1; ++p1 );
	
	int i = (p1 - str1);
	
	char *p2 = str1 + i;
	
	while(*p1++ = *str2++);
	
	return str1;
	
}

