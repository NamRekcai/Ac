#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��װ����2
//����Ȩ��������
//public	����Ȩ��	���ڿ��Է���	����Ҳ���Է���
//protected ����Ȩ��	���ڿ��Է���	���ⲻ���Է���
//private	˽��Ȩ��	���ڿ��Է���	���ⲻ���Է���

class Person
{
	//��Ϊ
public:
	void func()
	{
		m_name = "����";
		m_car = "������";
		m_psw = 000;
	}

	void showPerson()
	{
		cout << m_name << endl;
		cout << m_car << endl;
		cout << m_psw << endl;
	}
	
	//����

	//���� ����Ȩ��
public:
	string m_name;
	
protected:
	//���� ����Ȩ��
	string	m_car;

private:
	//���п����� ˽��Ȩ��
	int m_psw;
};

int main04010103()
{
	Person p;
	p.m_name = "����";
	/*p.m_car = "����";
	p.m_psw = 123;*/
	
	
	cout << p.m_name << endl;
	p.func();
	p.showPerson();
	
	//cout << p.m_car << endl;
	//cout << p.m_psw << endl;

	return 0;
}