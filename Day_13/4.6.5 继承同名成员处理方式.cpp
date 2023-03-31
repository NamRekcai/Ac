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
		cout << "Base - func()���ã�" << endl;
	}

	void func(int a)
	{
		cout << "Base - func(int a)���ã�" << endl;
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
		cout << "Son - func()���ã�" << endl;
	}

	void func(int a)
	{
		cout << "Son - func(int a)���ã�" << endl;
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

//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ����е����а汾��ͬ����Ա����
//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ��׵�������

int main()
{
	//test01();
	test02();
	return 0;
}