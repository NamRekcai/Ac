#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//返回值类型 函数名（参数=默认值）{}
int func(int a, int b = 10, int c = 10)
{
	return a + b + c;
}

//1、如果某个位置参数有默认值，那么这个位置往后，从左到右，必须都要有默认值

//2、如果函数参数声明有默认值，那么函数实现的时候不能有默认值

int func2(int a, int b = 10);//声明
int func2(int a, int b )
{
	return a + b;
}

int main0301()
{
	cout << func(100) << endl;
	cout << func(10,20,30) << endl;
	return 0;
}