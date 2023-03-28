#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "A的构造函数调用" << endl;
	}

	~A()
	{
		cout << "A的析构函数调用" << endl;
	}

	int m_A;
};

class B
{
public:
	B()
	{
		cout << "B的构造函数调用" << endl;
	}

	~B()
	{
		cout << "B的析构函数调用" << endl;
	}

	A a;
};


void test01()
{
	B b;
}

int main()
{
	test01();
	return 0;
}