#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void func()
{
	cout << "void func()的调用" << endl;
}


void func(int a)
{
	cout << "void func(int a)的调用" << endl;
}

void func(double a)
{
	cout << "void func(double a)的调用" << endl;
}

void func(int a,double b)
{
	cout << "void func(int a,double b)的调用" << endl;
}

void func(double a,int b )
{
	cout << "void func(int a,double b)的调用" << endl;
}

//函数返回值不可以作为函数重载的条件
//int void(double a, double b)
//{
//	cout << "int void(double a, double b)的调用" << endl;
//	return 1;
//}

int main0303( )
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);


	return 0;
}