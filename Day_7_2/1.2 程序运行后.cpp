#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int* func()
{
	int a = 10;//会释放 a--变量
	return &a;
}

int* func2()
{
	int* b = new int(20); //堆区空间开辟一个空间，空间大小为int，存20 b--指针
	return b;
}

int main0102()
{
	int* p = func();
	cout << *p << endl;
	//不要返回局部变量的地址，否则两次结果不一致

	int* q = func2();
	cout << *q << endl;
	cout << *q << endl;
	cout << *q << endl;
	cout << *q << endl;
	//确实在内存中存了

	//谁存谁释放
	delete q;
	cout << *q << endl; //变为野指针（使用未初始化的内存"q"）


	return 0;
}