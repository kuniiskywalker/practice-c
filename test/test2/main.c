#include <stdio.h>

static char str[12] = "Hello World";

int main ()
{
	
	// Prints("C Program\n");
	
	int i;
	for(i = 0; i < 12; i++) {
		
		Prints(str[i]);
	}
	
	return 0;
	
}

int Prints(char *str)
{
	
	printf("%c", str);
	
}

