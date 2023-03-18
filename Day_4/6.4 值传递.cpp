#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//数据交换
void swap(int num1, int num2)//形参
{
	cout << "交换前：" << endl;
	cout << "num1=" <<num1<< endl;
	cout << "num2=" <<num2<< endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	
	//return 可以省略不写或
	//return；
}

int main0604()
{
	int a = 10;
	int b = 20;//实参

	swap(a, b);

	cout << "主函数里的a=" << a << endl;
	cout << "主函数里的b=" << b << endl;

	//函数定义里小括号内称为形参，函数调用时传入的参数称为实参
	//所谓值传递，就是函数调用时实参将数值传入给形参
	return 0;
}