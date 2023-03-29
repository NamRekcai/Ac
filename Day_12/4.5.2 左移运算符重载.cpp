#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
	//��Ա���������ʺ�����<<����Ϊ������������Ч�������Ǵ�ͳ��cout��ʽ��һ�������÷��ˡ�p << cout
	/*void operator<<(Person& p)
	{
		cout << "m_A: " << p.m_A << " m_B: " << p.m_B << endl;
	}*/
};

//������������ĺ��������� operator<<
ostream& operator<<(ostream& out, Person& p)
{
	out << "m_A: " << p.m_A << " m_B: " << p.m_B;
	return out;
}

int main()
{
	cout << "Hello World" << " " << "123" << endl; //��ʽ���
	Person p1(10, 20);
	cout << p1 << endl;
	return 0;
}