#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void test01()
{
	Myprint myprint;
	myprint("Hello World"); //由于使用起来非常像函数，因此称为仿函数。
}

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test02()
{
	MyAdd add;
	int ret = add(10, 10);
	cout << ret << endl;
	//小结：
	//函数调用是：函数名+实参列表
	//运算符重载调用是：对象+实参列表
	cout << "MyAdd()(100, 100): " << MyAdd()(100, 100) << endl;
	//匿名对象调用：类名(): 匿名对象
}

int main()
{
	test01();
	test02();
	return 0;
}