#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void showValue(const int& a)//const int* const a =&_;
{
	//a += 10��
	cout << a << endl;
}

int main008()
{
	int a = 10;
	showValue(a);

	//int& ref = 10;���ñ�����Ҫһ���Ϸ����ڴ�ռ�,err
	const int& ref = 10;
	//����const,�������Ż��˴�����int temp=10;const int& ref=temp;

	//ref=10;//����const�󲻿����޸ı���

	return 0;
}