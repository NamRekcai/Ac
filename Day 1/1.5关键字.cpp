#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05()
{
	printf("short类型所占内存空间为：%d\n", sizeof(short));
	cout << "int类型所占内存空间为:" << sizeof(int) << endl;
	cout << "long类型所占内存空间为:" << sizeof(long) << endl;
	cout << "long long类型所占内存空间为:" << sizeof(long long) << endl;
	
	int a = 10;
	cout << "变量a所占内存空间为:" << sizeof(a) << endl;
	return 0;
}