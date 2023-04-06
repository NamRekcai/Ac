#include<iostream>
using namespace std;

template <class T1, class T2>
class Person
{

	//全局函数配合友元 类内实现
	friend void printPerson(Person<T1, T2>& p)
	{
		cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
	}

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	Person<string, int> p("Tom", 20);
	printPerson(p);
}

int main()
{
	test01();
	return 0;
}