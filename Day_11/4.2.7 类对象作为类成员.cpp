#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "A�Ĺ��캯������" << endl;
	}

	~A()
	{
		cout << "A��������������" << endl;
	}

	int m_A;
};

class B
{
public:
	B()
	{
		cout << "B�Ĺ��캯������" << endl;
	}

	~B()
	{
		cout << "B��������������" << endl;
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