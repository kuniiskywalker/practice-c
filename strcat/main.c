#include <stdio.h>
#include "strcat.h"

char *mystrcpy(char *str1, char *str2);

int main ()
{
	
	char aa[10] = "12345";
	char bb[10] = "abcde";
	char cc[10];
	
	mystrcat(bb, aa);
	
	mystrcpy(cc, bb);
	
	printf( "bb = %s : %d : 0x%x\n", bb, bb, bb );
	printf( "cc = %s : %d : 0x%x\n", cc, cc, cc );
	
	return 0;
}

char *mystrcpy(char *str1, char *str2)
{
	
	char* p = str1;
	
	while( *str1++ = *str2++ );
	
	return p;
}

