#include <stdio.h>

int main ()
{
	
	char str1[10] = "HELLO";
	
	char str2[10] = {'H','E','L','L','O','\0'};
	
	char str3[] = "H";
	
	char str4 = 'H';
	
	
	
	char str5[5] = {11,12,13,14,15};
	
	int Len = sizeof str5 /sizeof str5[0];
	
	int i;
	
	for(i = 0; i<Len; i++) {
		
		printf("%d\n", str5[i]);
	}
	
	
	return 0;
}

