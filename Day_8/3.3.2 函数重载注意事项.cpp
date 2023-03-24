#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1、引用作为重载条件
void func2(int& a)
{
	cout << "void func(int& a)的调用" << endl;
}

void func2(const int& a)
{
	cout << "void const func(int& a)的调用" << endl;
}

//2、函数重载碰到了函数默认参数
void func3(int a, int b = 10)
{
	cout << "void func3(int a, int b = 10)的调用" << endl;
}

void func3(int a)
{
	cout << "void func3(int a)" << endl;
}


int main030302()
{
	int a = 10;//变量
	func2(a);
	const int b = 20;//常量
	func2(b);
	//func3(10）//碰到默认参数产生歧义，需要避免
	return 0;
}