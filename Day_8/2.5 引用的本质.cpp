#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//���������ã�ת��Ϊint*const ref=&a;
void func(int& ref)
{
	ref = 100;//����ref������,�Զ�ת��Ϊ*ref=100;
}

int main0205()
{
	int a = 10;

	//�Զ�ת��Ϊint* const ref=&a,ָ�볣������ָ���ָ�򲻿��Ը���
	//Ҳ��˵����Ϊʲô���ò����Ը���
	int& ref = a;
	ref = 20;//�ڲ�����ref�����ã��ٶ�������ת��Ϊ*ref=20;

	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;

	return 0;
}