#include <stdio.h>

void func1();
void func2();

// GLOBAL
int data = 128;

int main ()
{
	
	func1();
	
	func2();
	func2();
	
	return 0;
	
}

void func1() {
	
	// ローカル変数（関数内のみ有効）
	// 実行した後に消される
	auto int a = 1;
	
	printf("global %d local %d\n", data, a);
	
}

void func2() {
	
	// ローカル変数（関数内のみ有効）
	// 実行した後も値を保持する
	static int b = 1;
	
	printf("global %d local %d\n", data, b);
	
	b++;
}

