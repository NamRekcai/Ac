#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base
{
public:
	static void func()
	{
		cout << "Base - func() 调用！" << endl;
	}

	static void func(int a)
	{
		cout << "Base - func(int a) 调用！" << endl;
	}

	static int m_A;
};

int Base::m_A = 10;

class Son : public Base
{
public:
	static void func()
	{
		cout << "Son - func() 调用！" << endl;
	}

	static void func(int a)
	{
		cout << "Son - func(int a) 调用！" << endl;
	}

	static int m_A;
};

int Son::m_A = 100;

void test01()
{
	//通过对象访问
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
	s.func();
	s.func(100);
	s.Base::func();
	s.Base::func(100);

	//通过类名访问
	cout << Son::m_A << endl;
	cout << Base::m_A << endl;
	Son::func();
	Son::func(10);
	Base::func();
	Base::func(10);
}

int main()
{
	test01();
	return 0;
}