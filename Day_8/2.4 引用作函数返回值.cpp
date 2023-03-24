#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//返回布局变量引用
int& test01()
{
	int a = 10;//局部变量
	return a;
}

//返回静态变量引用
int& test02()
{
	static int b = 20;
	return b;
}

int main0204()
{

	//不能返回局部变量的引用
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;

	int& ref2 = test02();
	cout << ref2 << endl;

	//函数作左值，必须返回引用
	test02()=1000;//返回的是b的引用 b=1000
	cout << ref2 << endl;

	return 0;
}