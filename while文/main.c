// for([�����ݒ莮]; [������]; [�Đݒ莮]);
// for(;;) === while(1)

#include <stdio.h>

int main()
{
	
	char *str1 = "aaa";
	char *str2 = "bbb";
	
	
	for(; *str2; ++str1 = ++str2);
	
	
	return 0;
	
}


