#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0704()
{
	int a = 10;

	int* p = &a;//ָ��ָ�����a�ĵ�ַ

	cout << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	//ָ�����ͱ�������32λϵͳռ4���ֽڣ�64λϵͳռ8���ֽ�
	return 0;
}
