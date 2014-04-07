#include <stdio.h>

void printMsg();

int main (int argc, const char * argv[])
{
	
	/*
	char txt[10] = "AAAAAAAAA";
	char* Str = txt;
	*/
	
	char* txt1 = "AAAAAA";
	
	printf("%s%iメモリー値0x%x\n", txt1, txt1, txt1);
	
	char* txt2 = "BBBBBB";
	
	printf("%s%iメモリー値0x%x\n", txt2, txt2, txt2);
	
	// char txt2[10] = "BBBBBBBBB";
	
	// printf("%s%iメモリー値0x%x\n", Str, Str, Str);
	
	// printf("%s%iメモリー値0x%x\n", txt2, txt2, txt2);
	
	// printMsg();
	
	return 0;
	
}

void printMsg()
{
	
	/*
	char AA[] = "CCCCCC";
	
	printf("%s%iメモリー値0x%x\n", AA, AA , AA);
	*/
}



