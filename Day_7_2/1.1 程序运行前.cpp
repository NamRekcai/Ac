#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 20;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main0101()
{
	//局部变量
	int a = 10;
	int b = 20;

	//静态变量
	static int s_a = 10;
	static int s_b = 20;

	//局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;

	//打印地址
	cout << "局部变量a地址为：" << (int)&a << endl;
	cout << "局部变量b地址为：" << (int)&b << endl;

	cout << "全局变量g_a地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b地址为：" << (int)&g_b << endl;

	cout << "静态变量s_a地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b地址为：" << (int)&s_b << endl;

	cout << "全局变量c_g_a地址为：" << (int)&c_g_a << endl;
	cout << "全局变量c_g_b地址为：" << (int)&c_g_b << endl;

	cout << "字符串变量地址为：" << (int) &"Hello" << endl;
	cout << "字符串变量地址为：" << (int) &"World" << endl;

	cout << "局部常量地址为：" << (int) &c_l_a << endl;
	cout << "局部常量地址为：" << (int) &c_l_b << endl;

	return 0;
}