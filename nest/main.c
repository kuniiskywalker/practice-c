#include <stdio.h>

int main ()
{
	
	int a = 111;
	
	{
		
		printf("aa%d", a);
		
		int b = 222;
		
		{
			
			printf("aa%d", b);
		}
		
		printf("aa%d", b);
		
	}
	
	return 0;
}

