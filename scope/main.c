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
	
	// ���[�J���ϐ��i�֐����̂ݗL���j
	// ���s������ɏ������
	auto int a = 1;
	
	printf("global %d local %d\n", data, a);
	
}

void func2() {
	
	// ���[�J���ϐ��i�֐����̂ݗL���j
	// ���s��������l��ێ�����
	static int b = 1;
	
	printf("global %d local %d\n", data, b);
	
	b++;
}

