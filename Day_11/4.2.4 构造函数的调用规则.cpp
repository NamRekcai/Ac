#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//有参构造函数
	Person(int a)
	{
		m_age = a;
		cout << "有参构造函数的调用" << endl;
	}

	//拷贝构造函数
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

int main()
{
	//Person p1;	//无参无法调用
	Person p1(10); //有参无法调用
	Person p2(p1);
	
	return 0;
}