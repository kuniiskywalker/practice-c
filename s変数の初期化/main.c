#include <stdio.h>

// コンパイル時に初期化
static int a = 12*3;

static int matx[3][3] = {
					{4,1,6},
					{9,4,0},
					{4,8,2}
					};

int main ()
{
	
	// 実行時に初期化
	int b = 100/10;
	
	
	printf("%d %d\n", a, b);
	
	int i;
	for(i = 0; i < 3; i++) {
		
		int n;
		for(n = 0; n < 3; n++) {
			printf("%d", matx[i][n]);
		}
		
		printf("\n");
	}
	
}



