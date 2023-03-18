#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define B 40//宏定义，不在内存中，不能用指针来修改
int main070302()
{
	const int a = 20;//存在地址中的常量，在c语言中是可以被修改的，在c++中不行(外挂原理)
	int c = B;
	//a=60;err
	int* p = &a;
	*p = 40;
	printf("a=%d\n", a);

	return 0;
}