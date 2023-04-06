#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

//��ͨ����ģ��
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
		return true;
	else
		return false;
}

//���廯�����廯�����ڳ���ģ��
template<>
bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;

	//�����������Ϳ���ֱ��ʹ��ͨ�õĺ���ģ��
	bool ret = myCompare(a, b);

	if (ret)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}

void test02()
{
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 20);
	//�Զ����������ͣ����������ͨ�ĺ���ģ��
	//���Դ������廯��Person�������͵�ģ�壬�������⴦���������
	bool ret = myCompare(p3, p2);

	if (ret)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}

int main()
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}