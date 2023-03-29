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

	//���ظ�ֵ�����
	Person& operator=(Person& p)
	{
		//Ӧ�����ж��Ƿ��������ڶ������еĻ����ͷŸɾ����ٽ������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);
		//��������ô���ģ�
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
	//����������ṩ��operator=������������ǳ���������һ��������ռ��ظ��ͷţ���ɳ��������
}

int main()
{
	test01();
	return 0;
}