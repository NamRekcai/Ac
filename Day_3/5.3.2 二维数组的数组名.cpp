#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main050302()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//1、查看二维数组所占的内存空间
	cout << "二维数组的大小：" << sizeof(arr) << endl;
	cout << "二维数组一行的大小：" << sizeof(arr[0]) << endl;
	cout << "二维数组元素的大小：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2、获取二维数组的首地址
	cout << "二维数组的首地址：" << (int)arr << endl;
	cout << "二维数组的第一行地址：" << (int)arr[0] << endl;
	cout << "二维数组的第二行地址：" << (int)arr[1] << endl;
	cout << "二维数组的第一个元素的地址：" << (int)&arr[0][0] << endl;
	cout << "二维数组的第二个元素的地址：" << (int)&arr[0][1] << endl;

	return 0;
}