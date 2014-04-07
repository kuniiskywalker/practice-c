#include <stdio.h>
#define LOOP while(1)

long unsigned mystrlen(char *str);
char *mystrcat(char *str1, char *str2);

int main ()
{
	
	char a[5];
	char b[5];
	
	while(1)
	{
		
		scanf("%s %s", &a, &b);
		
		mystrcat(a, b);
		
		printf("%s\n", a);
	}
	
	return 0;
}

long unsigned mystrlen(char *str)
{
	
	int i;
	for(i = 0; i < str[i]; i++);
	
	return i;
}

char *mystrcat(char *str1, char *str2)
{
	
	char *p;
	int i = mystrlen(str1);
	
	p = str1 + i;
	
	while(*p++ = *str2++);
	
	return str1;
}

