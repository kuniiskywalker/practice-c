#include <stdio.h>
#include <string.h>

char *mystrcpy(char *str1, char *str2);
unsigned long mystrlen(char *str1);
char *mystrcat(char *s, char *t);

int main ()
{
	
	char str1[] = "ABCDEF";
    char str2[] = "123";
    char *p = "abcd";
	
	char aa[10];
	
	mystrcpy(aa, str1);
	
	long bb = mystrlen(aa);
	
	// printf("str=%s %d aa=%s %d len=%d\n", str1, str1, aa, aa, bb);
	
	printf("str=%s\n", mystrcat(str1, str2));
	
    return 0;
}

char *mystrcpy(char *str1, char *str2)
{
	
	char* p = str1;
	
	while( *str1++ = *str2++ );
	
	return p;
	
}

unsigned long mystrlen(char *str)
{
	
	/*
	unsigned long i;
	
	for(i=0; i<str[i]; i++);
	*/
	
	char *p = str;
	
	for(p=str; *p; ++p);
	
	
	return (p - str);
	
}

char *mystrcat(char *s, char *t)
{
	
	char *p = s + mystrlen(s);
	
	while(*p++ = *t++);
	
	return s;
	
}
