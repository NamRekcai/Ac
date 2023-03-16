#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040102()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	//c++中三目运算符返回的是表达式，c中返回的是值

	(a > b ? a : b) = 100;
	//c++中三目运算符返回的是变量，可以继续赋值

	//cout << c << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}