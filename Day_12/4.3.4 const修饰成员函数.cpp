#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		m_A = 0;
		m_B = 0;
	}

	//常函数
	void showPerson() const
	{
		//this的本质：Type* const pointer;
		//this = NULL; err不能修改指针的指向
		//函数后面加const修饰的是this指针，让指针的指向的值也不能修改，等于const Type* const pointer
		//this->m_A = 100;
		this->m_B = 100;
	}

	void myfunc()
	{

	}

	int m_A;
	mutable int m_B;
};

void test01()
{
	Person p;
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	p.showPerson();
	cout << p.m_B << endl;

	//常对象
	const Person p1;
	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	//p1.m_A = 10; 常对象不可修改成员变量的值，但是，可以访问
	p1.m_B = 20; //常函数可以修改mutable修饰的成员变量

	//常对象只能调用常函数
	p1.showPerson();
	//p1.myfunc();
}

int main()
{
	test01();
	return EXIT_SUCCESS;
}