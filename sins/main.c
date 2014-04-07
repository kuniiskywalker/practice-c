#include <stdio.h>

int Sins(char[], char[], int);

int main ()
{
	
	char as[80], bs[80];
	
	int n;
	
	while(1) {
		
		printf("Input 1 "); scanf("%s", as);
		
		printf("Input 2 "); scanf("%s", bs);
		
		printf("output %d\n", as);
		printf("output %d\n", bs);
		
		Sins(as, bs, n);
		
		printf("Input 1 [%s]\n", *as);
		printf("Input 2 [%s]\n", *bs);
		
	}
	
}


int Sins(char as[], char bs[], int n)
{
	
	as[1] = 'B';
	
	bs[1] = 'C';
	
	printf("output %d\n", as);
	printf("output %d\n", bs);
	
}

