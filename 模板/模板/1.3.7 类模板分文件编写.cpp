#include<iostream>
using namespace std;

//#include "1.3.7 person.h"

//��һ�֣�����cppԴ�ļ�
//#include "1.3.7 person.cpp"

//�ڶ��ַ�������������ʵ��д��һ���ļ���׺����Ϊ.hpp
#include "1.3.7 person.hpp"

//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "����: " << this->m_Name << " ����: " << this->m_Age << endl;
//}

void test01()
{
	Person<string, int> p("Tom", 20);
	p.showPerson();
}

int main()
{
	test01();
	return 0;
}