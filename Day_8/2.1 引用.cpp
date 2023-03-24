#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0201()
{
	int a = 10;
	//数据类型&别名=原名
	int& b = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}