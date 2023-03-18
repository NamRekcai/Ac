#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0707()
{
	double arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = arr;

	cout << "第一个元素：" << arr[0] << endl;
	cout << "用指针访问第一个元素：" << *p << endl;

	cout << "第二个元素：" << arr[2] << endl;
	cout << "用指针访问第二个元素：" << *(p + 1) << endl; 

	//利用指针来遍历数组
	for (int i = 0; i < 10 ; i++)
	{
		cout << *(p+i) << endl; 
	}

	return 0;
}