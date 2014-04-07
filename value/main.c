#include <stdio.h>

int main ()
{
	
	int a = -456,
		b = 123,
		c = 0123, // 8進数表現（先頭に0をつける）
		d = 0x7fff,
		e = 0xffff,
		f = 0x8000;
	
	float fa = 5.024,
		  fb = 1.85432109e5;
	
	double da = 5.024,
		   db = 1.85432109e5;
	
	printf(" a --> %6d  b --> %6d  c --> %6d\n ", a, b, c);
	
	printf(" d --> %6d  e --> %6d  f --> %6d\n ", d, e, f);
	
	
	
	
}



