#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//值传递
void swap1(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "swap1函数中num1=" << num1 << endl;
	cout << "swap1函数中num2=" << num2 << endl;
}

//地址传递
void swap2(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	cout << "swap1函数中num1=" << *num1 << endl;
	cout << "swap1函数中num2=" << *num2 << endl;
}

int main0709()
{
	int a = 10;
	int b = 20;
	//swap1(a, b);
	swap2(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}