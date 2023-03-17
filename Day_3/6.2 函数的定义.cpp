#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//实现，得出两个数字之和
/*
函数的语法
返回值类型 函数名（参数列表）
{
	函数体语句
	return 表达式
}
*/

//函数的定义：
int add(int num1, int num2)//定义中的num1 num2称为形参
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	//函数的使用（调用）
	//函数名（参数）；
	int c = add(a, b);//调用时的a，b称为实际参数，简称实参
	cout << c << endl;
	return 0;
}