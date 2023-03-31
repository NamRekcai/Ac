#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 10;
	}

	void func()
	{
		cout << "Base - func()调用！" << endl;
	}

	void func(int a)
	{
		cout << "Base - func(int a)调用！" << endl;
	}

	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Son - func()调用！" << endl;
	}

	void func(int a)
	{
		cout << "Son - func(int a)调用！" << endl;
	}

	int m_A;
};

void test01()
{
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
}

void test02()
{
	Son s;
	s.func();
	s.func(10);

	s.Base::func();
	s.Base::func(10);


}

//当子类与父类拥有同名的成员函数，子类会隐藏父类中的所有版本的同名成员函数
//如果想访问父亲中被隐藏的同名成员函数，需要加父亲的作用域

int main()
{
	//test01();
	test02();
	return 0;
}