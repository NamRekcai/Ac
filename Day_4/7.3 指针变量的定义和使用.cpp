#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main070301()
{
	int a = 10;//定义整型变量a

	int* p = NULL;//定义一个指针(指针变量)
	//int*代表一种数据类型，int*是指针类型,p是变量名
	
	//指针变量赋值
	p = &a;
	cout << p << endl;
	cout << &a << endl;

	//指针的使用
	//通过*操作指针变量指向的内存
	cout << "*p=" << *p << endl;//解引用,*称为取值运算
	//指针间接修改变量的值
	*p = 20;
	cout << a << endl;

	return 0;
}