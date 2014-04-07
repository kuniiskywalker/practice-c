// for([‰Šúİ’è®]; [ğŒ®]; [Äİ’è®]);
// for(;;) === while(1)

#include <stdio.h>

int main()
{
	
	char str[4] = "aaa";
	
	char *p;
	
	for(p = str; *p; ++p);
	
	printf("%d %d", p, str);
	
	return 0;
	
}


