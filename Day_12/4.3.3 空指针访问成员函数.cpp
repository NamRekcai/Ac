#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	void showClassName()
	{
		cout << "����Person��" << endl;
	}

	void showPerson()
	{
		if (this == NULL)
		{
			return;
		}
		cout << m_Age << endl;//this _> m_Age,this�ǿյ�
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName();//this���Ե��ó�Ա����
	p->showPerson();//���ǣ������Ա�������õ���thisָ�룬�Ͳ�������
}

int main()
{
	test01();
	return 0;
}