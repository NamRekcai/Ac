#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0706()
{
	int a = 10;
	int b = 20;

	//常量指针
	//const修饰的是指针，指针的指向可以修改，但是指针指向的值不可以更改
	const int* p1 = &a;
	p1 = &b;
	//*p1 = 100;//err

	//指针常量
	//const修饰的是常量，指针指向不可以修改，指针指向的值可以修改
	int* const p2 = &a;
	//p2 = &b;//err
	*p2 = 100;

	//const既修饰指针，又修饰常量
	//const既修饰指针，又修饰常量,指针指向不可以修改,指针指向的值也不可以更改
	const int* const p3 = &a;
	//p3 = &b;//err
	//*p3 = 100;//err

	return 0;
}