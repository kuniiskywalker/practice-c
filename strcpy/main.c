#include <stdio.h>

#include "mystrcpy.h"

int main ()
{
	
	char a[10];
	char b[10] = "bbb";
	
	mystrcpy(a, b);
	
	printf("%s", a);
	
}

