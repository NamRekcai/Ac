#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main070301()
{
	int a = 10;//�������ͱ���a

	int* p = NULL;//����һ��ָ��(ָ�����)
	//int*����һ���������ͣ�int*��ָ������,p�Ǳ�����
	
	//ָ�������ֵ
	p = &a;
	cout << p << endl;
	cout << &a << endl;

	//ָ���ʹ��
	//ͨ��*����ָ�����ָ����ڴ�
	cout << "*p=" << *p << endl;//������,*��Ϊȡֵ����
	//ָ�����޸ı�����ֵ
	*p = 20;
	cout << a << endl;

	return 0;
}