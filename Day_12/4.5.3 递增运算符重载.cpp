#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);

public:
	Person()
	{
		m_A = 0;
		m_B = 0;
	}

	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

	//����������ĺ�����������ǣ�operator++
	//ǰ�õ���
	Person& operator++()
	{
		//������
		this->m_A++;
		this->m_B++;
		//�󷵻ر���
		return *this;
	}

	//���õ���
	Person operator++(int) //int�Ǹ�ռλ��������������ǰ�úͺ��õ���
	{
		//�ȷ���
		Person temp = *this;
		//������
		m_A++;
		m_B++;
		return temp;
	}

private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream& out, Person& p)
{
	out << "m_A: " << p.m_A << " m_B:" << p.m_B;
	return out;
}

int main()
{
	int i = 1;
	//i++++++++; //���ص���ֵ��ֵ���ݣ�
	++++++++i;	//���ص�������
	cout << i << endl;
	//ǰ�õ���������ֵ���������õģ����õ���������ֵ��ֵ����

	Person p1(1, 2);
	p1++;
	++p1;
	//���õ�������ֵ�����ǵ�ַ��ԭ���ǣ����ص��Ǿֲ����󣬾ֲ����������ķ�Χ��ִ����ͱ��ͷ��ˣ�
	//������ص������ã��ٽ����������ǷǷ�����
	//���õ�����ǰ�õ����˷�ʱ��
	cout << p1 << endl;
	return 0;
}