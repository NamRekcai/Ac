#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	//�޲ι��캯��
	Person()
	{
		cout << "�޲ι��캯���ĵ���" << endl;
	}

	//�вι��캯��
	Person(int age,int height)
	{
		m_age = age;
		m_height = new int(height);

		cout << "�вι��캯���ĵ���" << endl;
	}

	//ϵͳ������׼���Ŀ������캯��
	/*Person(const Person& p)
	{
		m_age = p.m_age;
		m_height = p.m_height;
		cout << "�������캯���ĵ���" << endl;
	}*/

	//�Լ�ȥд�������캯��������Ҫ����������������ͬһ������ڴ��ظ��ͷŵ�����
	Person(const Person&p)
	{
		m_age = p.m_age;
		//m_height = new int(height);
		m_height = new int(*p.m_height);//�������

		cout << "�вι��캯���ĵ���" << endl;
	}

	~Person()
	{
		cout << "�������캯���ĵ���" << endl;
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
			
		
	}

	int m_age;
	int* m_height;

};

void test01()
{
	Person p1(18, 180);
	Person p2(p1);
	cout << "p1�������ǣ�" << p1.m_age << "��ߣ�" << p1.m_height << endl;
	cout << "p2�������ǣ�" << p2.m_age << "��ߣ�" << p2.m_height << endl;
}

int main()
{
	test01();
	return 0;
}