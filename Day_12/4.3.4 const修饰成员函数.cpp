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

	//������
	void showPerson() const
	{
		//this�ı��ʣ�Type* const pointer;
		//this = NULL; err�����޸�ָ���ָ��
		//���������const���ε���thisָ�룬��ָ���ָ���ֵҲ�����޸ģ�����const Type* const pointer
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

	//������
	const Person p1;
	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	//p1.m_A = 10; �����󲻿��޸ĳ�Ա������ֵ�����ǣ����Է���
	p1.m_B = 20; //�����������޸�mutable���εĳ�Ա����

	//������ֻ�ܵ��ó�����
	p1.showPerson();
	//p1.myfunc();
}

int main()
{
	test01();
	return EXIT_SUCCESS;
}