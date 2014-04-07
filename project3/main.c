#include <stdio.h>

int main (int argc, const char * argv[])
{
	
	int  a = 5;
	int* p;

	p = &a;  	// ポインタ変数pに変数aのアドレスを入れる

	printf("ポインタ変数pの値は0x%xです。\n", p);

	p++;
	printf("ポインタ変数pの値は0x%xです。\n", p);
	
	return 0;
}


