#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "�޲ι��캯���ĵ���" << endl;
	}

	Person(int age)
	{
		m_age = age;
		cout << "�вι��캯���ĵ���" << endl;
	}

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

void doWork(Person p)
{

}

Person doWork2()
{
	Person p;
	cout << (int*)&p << endl;
	return p;
}

void test01()
{
	//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ������
	Person p1(100);
	Person p2(p1);//�������캯������
	//Perosn p2 = p1;
	Person p3;
	p3 = p1;//���ǵ��ÿ������캯��,���Ǹ�ֵ����
	cout << p3.m_age << endl;

	//2��ֵ���ݵķ�ʽ������������ֵ
	doWork(p1);

	//3����ֵ���ؾֲ�����
	Person p4 = doWork2();
	cout << (int*)&p4 << endl;


}

int main()
{
	test01();
	return 0;
}