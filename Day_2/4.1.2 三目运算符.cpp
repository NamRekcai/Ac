#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040102()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	//c++����Ŀ��������ص��Ǳ��ʽ��c�з��ص���ֵ

	(a > b ? a : b) = 100;
	//c++����Ŀ��������ص��Ǳ��������Լ�����ֵ

	//cout << c << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}