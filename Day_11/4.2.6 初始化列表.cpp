#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	//���캯��ȥ��ʼ��
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//ʹ�ó�ʼ���б�
	//Person() :m_A(30), m_B(40), m_C(50) {}
	Person(int a, int b, int c) :
		m_A(a), m_B(b), m_C(c) 
	{
		cout << "���캯���ĵ���" << endl;
	}

	//��ȴ�ͳ��ʽ����ֵ�Ż��������ţ�ǰ�����ð��
	int m_A;
	int m_B;
	int m_C;
};


int main()
{
	Person p1(10,50,60);

	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	cout << p1.m_C << endl;

	return 0;
}