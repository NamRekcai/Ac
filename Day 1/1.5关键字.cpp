#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05()
{
	printf("short������ռ�ڴ�ռ�Ϊ��%d\n", sizeof(short));
	cout << "int������ռ�ڴ�ռ�Ϊ:" << sizeof(int) << endl;
	cout << "long������ռ�ڴ�ռ�Ϊ:" << sizeof(long) << endl;
	cout << "long long������ռ�ڴ�ռ�Ϊ:" << sizeof(long long) << endl;
	
	int a = 10;
	cout << "����a��ռ�ڴ�ռ�Ϊ:" << sizeof(a) << endl;
	return 0;
}