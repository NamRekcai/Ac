#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Person
{
public:
	//��̬��Ա����
	static int m_A;
	//��̬��Ա�����ص�
	//1���ڱ���׶η����ڴ�
	//2�����������������ʼ��
	//3�����ж�����ͬһ������


	//��̬��Ա����
	//��̬��Ա�������ص�
	//1�����ж�����ͬһ������
	//2����̬��Ա����ֻ��ȥ���ʾ�̬��Ա�������������ж�����ͬһ�����ݣ�

	static void func()
	{
		m_B = 10;
		//m_C = 100;�����Է��ʷǾ�̬��Ա����
		cout << "func()�ĵ���" << endl;
	}


private:
	static int m_B;//��̬��Ա����Ҳ���з���Ȩ�޵�
	int m_C;
};

int Person::m_A = 20;//�����ʼ��
int Person::m_B = 10;//�����ʼ��

void test01()
{
	//��̬��Ա����1���ַ��ʷ�ʽ

	//1��ͨ������
	Person p1;
	p1.m_A = 100;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;			//���ж�����ͬһ������
	cout << p1.m_A << endl;
	cout << p2.m_A << endl;

	//2��ͨ������(��̬����������ĳ������������)
	cout << "m_A" << Person::m_A << endl;
	//cout << "m_B" << Person::m_B << endl;

}

void test02()
{	
	//��̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ������
	Person p3;
	p3.func();

	//2��ͨ������
	Person::func();
	//Person::func2();

}


int main()
{

	//test01();
	test02();
	return 0;
}