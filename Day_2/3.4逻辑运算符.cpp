#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0304()
{
	int a = 10;
	int b = 20;
	cout << !a << endl; //0
	cout << !!a << endl; //1
	//���� �ٱ���

	b = 0;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	//&& ͬ��Ϊ�棬����Ϊ��
	//|| ͬ��Ϊ�٣�����Ϊ��
	return 0;
}