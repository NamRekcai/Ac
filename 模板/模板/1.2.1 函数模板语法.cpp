#include <iostream>
using namespace std;

//交换整型函数
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换浮点型函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//利用模板提供的通用交换函数
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;

	//swapInt(a, b);

	//利用模板实现交换
	//1、自动类型推导
	mySwap(a, b);

	//2、显示指定类型
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//总结
	//1、函数模板利用关键字template
	//2、使用函数模板有两种形式：自动类型推导、显示指定类型
	//3、模板的目的是为了提高复用性，将类型参数化
}

int main()
{
	test01();
	return EXIT_SUCCESS;
}