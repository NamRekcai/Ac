#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void func()
{
	cout << "void func()�ĵ���" << endl;
}


void func(int a)
{
	cout << "void func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "void func(double a)�ĵ���" << endl;
}

void func(int a,double b)
{
	cout << "void func(int a,double b)�ĵ���" << endl;
}

void func(double a,int b )
{
	cout << "void func(int a,double b)�ĵ���" << endl;
}

//��������ֵ��������Ϊ�������ص�����
//int void(double a, double b)
//{
//	cout << "int void(double a, double b)�ĵ���" << endl;
//	return 1;
//}

int main0303( )
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);


	return 0;
}