#include <stdio.h>

int main (int argc, const char * argv[])
{
	
	int  a = 5;
	int* p;

	p = &a;  	// �|�C���^�ϐ�p�ɕϐ�a�̃A�h���X������

	printf("�|�C���^�ϐ�p�̒l��0x%x�ł��B\n", p);

	p++;
	printf("�|�C���^�ϐ�p�̒l��0x%x�ł��B\n", p);
	
	return 0;
}


