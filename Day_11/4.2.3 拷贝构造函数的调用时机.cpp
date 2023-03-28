#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "无参构造函数的调用" << endl;
	}

	Person(int age)
	{
		m_age = age;
		cout << "有参构造函数的调用" << endl;
	}

	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "析构函数的调用" << endl;
	}

	int m_age;
};

void doWork(Person p)
{

}

Person doWork2()
{
	Person p;
	cout << (int*)&p << endl;
	return p;
}

void test01()
{
	//1、使用一个已经创建完毕的对象来初始化另一个对象
	Person p1(100);
	Person p2(p1);//拷贝构造函数调用
	//Perosn p2 = p1;
	Person p3;
	p3 = p1;//不是调用拷贝构造函数,而是赋值操作
	cout << p3.m_age << endl;

	//2、值传递的方式给函数参数传值
	doWork(p1);

	//3、以值返回局部对象
	Person p4 = doWork2();
	cout << (int*)&p4 << endl;


}

int main()
{
	test01();
	return 0;
}