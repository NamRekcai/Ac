#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1��������Ϊ��������
void func2(int& a)
{
	cout << "void func(int& a)�ĵ���" << endl;
}

void func2(const int& a)
{
	cout << "void const func(int& a)�ĵ���" << endl;
}

//2���������������˺���Ĭ�ϲ���
void func3(int a, int b = 10)
{
	cout << "void func3(int a, int b = 10)�ĵ���" << endl;
}

void func3(int a)
{
	cout << "void func3(int a)" << endl;
}


int main030302()
{
	int a = 10;//����
	func2(a);
	const int b = 20;//����
	func2(b);
	//func3(10��//����Ĭ�ϲ����������壬��Ҫ����
	return 0;
}