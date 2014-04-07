#include <stdio.h>

int main()
{
	
	unsigned long mystrlen();
	
	char str[10] = "abcd";
	
	printf("%d", mystrlen(str));
	
	return 0;
	
}

unsigned long mystrlen(char *str)
{
	
	char *p = str;
	
	for(; *p; ++p);
	
	printf("%d %d", p, str);
	
	return (p - str);
	
}

