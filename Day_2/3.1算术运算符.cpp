#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0301()
{
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	printf("%d\n", a1 - b1);
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //err ����������Ϊ0
	
	double d1 = 1;
	double d2 = 2;
	cout << d1 / d2 << endl;//����С���������

	//ȡģ
	int a4 = 10;
	int b4 = 3;//ȡģ���㱾�ʻ��ǳ���
	cout << a4 % b4 << endl;

	//����
	int a = 10;
	a++;
	cout << a << endl;
	return 0;
}