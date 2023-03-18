#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0704()
{
	int a = 10;

	int* p = &a;//指针指向变量a的地址

	cout << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	//指针类型变量，在32位系统占4个字节，64位系统占8个字节
	return 0;
}
