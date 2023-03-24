#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//发现是引用，转换为int*const ref=&a;
void func(int& ref)
{
	ref = 100;//发现ref是引用,自动转换为*ref=100;
}

int main0205()
{
	int a = 10;

	//自动转换为int* const ref=&a,指针常量，是指针的指向不可以更改
	//也就说明了为什么引用不可以更改
	int& ref = a;
	ref = 20;//内部发现ref是引用，再动帮我们转换为*ref=20;

	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	return 0;
}