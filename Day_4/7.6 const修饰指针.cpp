#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0706()
{
	int a = 10;
	int b = 20;

	//����ָ��
	//const���ε���ָ�룬ָ���ָ������޸ģ�����ָ��ָ���ֵ�����Ը���
	const int* p1 = &a;
	p1 = &b;
	//*p1 = 100;//err

	//ָ�볣��
	//const���ε��ǳ�����ָ��ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
	int* const p2 = &a;
	//p2 = &b;//err
	*p2 = 100;

	//const������ָ�룬�����γ���
	//const������ָ�룬�����γ���,ָ��ָ�򲻿����޸�,ָ��ָ���ֵҲ�����Ը���
	const int* const p3 = &a;
	//p3 = &b;//err
	//*p3 = 100;//err

	return 0;
}