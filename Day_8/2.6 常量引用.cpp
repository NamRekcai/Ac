#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void showValue(const int& a)//const int* const a =&_;
{
	//a += 10；
	cout << a << endl;
}

int main008()
{
	int a = 10;
	showValue(a);

	//int& ref = 10;引用本身需要一个合法的内存空间,err
	const int& ref = 10;
	//加入const,编译器优化了带啊：int temp=10;const int& ref=temp;

	//ref=10;//加入const后不可以修改变量

	return 0;
}