#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//�вι��캯��
	Person(int a)
	{
		m_age = a;
		cout << "�вι��캯���ĵ���" << endl;
	}

	//�������캯��
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "�������캯���ĵ���" << endl;
	}

	~Person()
	{
		cout << "���������ĵ���" << endl;
	}

	int m_age;
};

int main()
{
	//Person p1;	//�޲��޷�����
	Person p1(10); //�в��޷�����
	Person p2(p1);
	
	return 0;
}