#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Person
{
public:
	//静态成员变量
	static int m_A;
	//静态成员变量特点
	//1、在编译阶段分配内存
	//2、类内声明，类外初始化
	//3、所有对象共享同一份数据


	//静态成员函数
	//静态成员函数的特点
	//1、所有对象共享同一个函数
	//2、静态成员函数只能去访问静态成员变量（类内所有对象共享同一份数据）

	static void func()
	{
		m_B = 10;
		//m_C = 100;不可以访问非静态成员变量
		cout << "func()的调用" << endl;
	}


private:
	static int m_B;//静态成员变量也是有访问权限的
	int m_C;
};

int Person::m_A = 20;//类外初始化
int Person::m_B = 10;//类外初始化

void test01()
{
	//静态成员变量1两种访问方式

	//1、通过对象
	Person p1;
	p1.m_A = 100;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;			//所有对象共享同一份数据
	cout << p1.m_A << endl;
	cout << p2.m_A << endl;

	//2、通过类名(静态变量不属于某个对象，属于类)
	cout << "m_A" << Person::m_A << endl;
	//cout << "m_B" << Person::m_B << endl;

}

void test02()
{	
	//静态成员函数的两种访问方式
	//1、通过对象
	Person p3;
	p3.func();

	//2、通过类名
	Person::func();
	//Person::func2();

}


int main()
{

	//test01();
	test02();
	return 0;
}