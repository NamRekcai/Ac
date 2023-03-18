#define _CRT_SECURE_NO_WARNINGS 1
#include "6.7 函数的分文件编写.h"

//函数的声明
int max(int a, int b);
int max(int a, int b);

//函数的定义
int max(int a, int b)//形参
{
	return a > b ? a : b;
}

//声明可以多次，定义只能一次
int main0606()
{
	int a = 100;
	int b = 200;//实参
	cout << max(a, b) << endl;
	return 0;
}