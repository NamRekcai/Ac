#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define B 40//�궨�壬�����ڴ��У�������ָ�����޸�
int main070302()
{
	const int a = 20;//���ڵ�ַ�еĳ�������c�������ǿ��Ա��޸ĵģ���c++�в���(���ԭ��)
	int c = B;
	//a=60;err
	int* p = &a;
	*p = 40;
	printf("a=%d\n", a);

	return 0;
}