#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//����ֵ���� ������������=Ĭ��ֵ��{}
int func(int a, int b = 10, int c = 10)
{
	return a + b + c;
}

//1�����ĳ��λ�ò�����Ĭ��ֵ����ô���λ�����󣬴����ң����붼Ҫ��Ĭ��ֵ

//2�������������������Ĭ��ֵ����ô����ʵ�ֵ�ʱ������Ĭ��ֵ

int func2(int a, int b = 10);//����
int func2(int a, int b )
{
	return a + b;
}

int main0301()
{
	cout << func(100) << endl;
	cout << func(10,20,30) << endl;
	return 0;
}