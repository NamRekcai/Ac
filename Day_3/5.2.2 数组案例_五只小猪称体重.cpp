#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05020202()
{
	//1、建立一个空间大小为5大小的数组
	int arr[5] = { 30,70,90,100,10 };

	//2、比较出谁的体重最大
	int i = 0;
	int max = arr[0];
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "五只小猪最大的体重为：" << max << endl;
	return 0;
}