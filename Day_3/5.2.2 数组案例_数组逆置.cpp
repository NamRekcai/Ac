#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05020203()
{
	//1、先定义一个五个空间的数组，用变量j来遍历
	int arr[5] = { 1,2,3,4,5 };
	//2、再定义一个新的数组将上面的数组元素逆置存入，用变量i来遍历
	int arr2[5];
	int i;
	int j;
	for (i = 0, j = sizeof(arr) / sizeof(arr[0]) - 1; i < 5; i++, j--)
	{
		arr2[i] = arr[j];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "arr2[" << i << "] = " << arr2[i] << endl;
	}
	return 0;
}