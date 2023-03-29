#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//重载赋值运算符
	Person& operator=(Person& p)
	{
		//应该先判断是否有属性在堆区，有的话先释放干净，再进行深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);
		//编译器这么做的：
		//m_Age = p.m_Age;
		return *this;
	}

	int* m_Age;
};

void test01()
{
	int a = 20;
	int b = 30;
	int c = 0;
	c = b = a;
	cout << c << endl;
	Person p1(10);
	Person p2(20);
	Person p3(40);
	p2 = p1 = p3;
	cout << *p1.m_Age << endl;
	cout << *p2.m_Age << endl;
	cout << *p3.m_Age << endl;
	//如果编译器提供的operator=，拷贝本质是浅拷贝，会对一块儿堆区空间重复释放，造成程序崩溃！
}

int main()
{
	test01();
	return 0;
}