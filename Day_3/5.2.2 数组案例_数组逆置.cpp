#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05020203()
{
	//1���ȶ���һ������ռ�����飬�ñ���j������
	int arr[5] = { 1,2,3,4,5 };
	//2���ٶ���һ���µ����齫���������Ԫ�����ô��룬�ñ���i������
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