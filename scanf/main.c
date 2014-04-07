#include <stdio.h>

#define LOOP while(1)

#define max(x, y) ( ((x) > (y))? x: y)

#define MODE 8

#define EOF (-1)

void printMsg(char Str);

int main (int argc, const char * argv[])
{
	
	#if MODE == 1
		
		int a = 1;
		int b = 5;
		
		LOOP{
			
			printf("%iメモリー%i\n", a, &a);
			
			if(a == b) break;
			
			a++;
		}
		
	#elif MODE == 2
		
		int a, b, c;
		
		LOOP{
			
			printf("INPUT NOW!\n");
			
			scanf("%d %d", &a, &b);
			
			c = a + b;
			
			printf("%i + %i = %i \n", a, b, c);
			
		}
		
	#elif MODE == 3
		
		char str[255];
		
		LOOP{
			
			printf("INPUT NOW!\n");
			
			scanf("%s", &str);
			
			printf("This is %s \n", str);
			
		}
		
	#elif MODE == 4
		
		int a, b;
		
		LOOP{
			
			printf("INPUT NOW!\n");
			
			scanf("%d,%d", &a, &b);
			
			printf("You input number is %d", max(a, b) );
			
		}
		
	#elif MODE == 5
		
		int    a = 123;
		float  b = 123.135;
		char   c = 'A';
		static char d[] = "HELLO WORLD";
		
		printf("a --> %d b --> %f c --> %c\n", a, b, c);
		printf("d --> %s\n", d);
		
	#elif MODE == 6
		
		int age;
		char name[20];
		
		printf("あなたのお名前は？"); scanf("%s", name);
		
		printf("あなたの年齢は？"); scanf("%d", &age);
		
		printf("%sさんは%d歳ですね", name, age);
		
	#elif MODE == 7
		
		int c;
		
		while(!((c=getchar()) == EOF)) putchar(c);
		
		
	#elif MODE == 8
		
		int Max = 3;
		int Num = 0;
		
		int age;
		int height;
		int weight;
		
		LOOP {
			
			printf("年齢は?"); scanf("%d", &age);
			
			printf("身長は?"); scanf("%d", &height);
			
			printf("体重は?"); scanf("%d", &weight);
			
			printf("あなたの年齢は%d歳で身長%dcm体重%dkg\n", age, height, weight);
			
			Num++;
			
			if(Num == Max) break;
			
		}
		
		
		
	#elif MODE == 9
		
		/* Base Data Type */
		char			moji, cstr[10];
		int				i, count, k_table[5];
		float			ff, yy, f_table[5];
		double			dd, xx;
		
		
		
		/* ------------------------ */
		
		moji	= 'A';
		
		cstr[0] = 'M';
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		printf("char --> %c\n", moji);
		
		printf("char --> %s\n", &cstr);
		
		
	#endif
	
	return 0;
	
}

void printMsg(char Str)
{
	
	static char Txt[] = "This is dog!";
	
	Txt[0] = Str;
	
	printf("%sメモリー%i\n", Txt, &Txt);
	
}



