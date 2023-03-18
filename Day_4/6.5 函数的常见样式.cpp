#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1、无参无返
void test01()
{
	//void a=10;//err，无类型不可以创建变量，原因是无法分配内存
}

//2、有参无返
void test02(int a)
{

}

//3、无参有返(
int test03()
{
	return 10;
}

//4、有参有返
int test04(int a, int b)
{
	int sum = a + b;
	return sum;
}

int main0605()
{



	return 0;
}