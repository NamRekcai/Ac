#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0705()
{
	int* p = NULL;
	//cout << *p << endl;err
	//访问空指针报错
	//内存中0-255为系统占用内存，不允许用户访问
	
	//int* p = (int*)0x1100;
	//cout << *p << endl;
	//访问野指针出错
	return 0;
}