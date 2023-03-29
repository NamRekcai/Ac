#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{

	}
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	int m_A;
	int m_B;

	//�ó�Ա����ȥʵ�ֵ�
	Person PersonAddPerson(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//���������ڼӺ���ô�����㣬������ĺ��������ǣ�operator+
	/*Person operator+(const Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
};

Person operator+(const Person& p1, const Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p2.m_B + p2.m_B;
	return temp;
}

Person operator+(const Person& p1, int val)
{
	Person temp;
	temp.m_A = p1.m_A + val;
	temp.m_B = p1.m_B + val;
	return temp;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a + b << endl; //�������õ��������ͣ���������֪�����ȥ���������

	Person p1(1, 5);
	Person p2(10, 20);
	Person p3 = p1 + p2; //��������֪����ô��
	Person p4 = p1 + 10; //��������֪����ô��
	cout << p3.m_A << endl << p3.m_B << endl;
	cout << p4.m_A << endl << p4.m_B << endl;
	return EXIT_SUCCESS;
}