// for([初期設定式]; [条件式]; [再設定式]);
// for(;;) === while(1)

#include <stdio.h>

int main()
{
	
	char *str1 = "aaa";
	char *str2 = "bbb";
	
	
	for(; *str2; ++str1 = ++str2);
	
	
	return 0;
	
}


