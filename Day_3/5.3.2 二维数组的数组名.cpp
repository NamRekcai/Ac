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

	//1���鿴��ά������ռ���ڴ�ռ�
	cout << "��ά����Ĵ�С��" << sizeof(arr) << endl;
	cout << "��ά����һ�еĴ�С��" << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ�صĴ�С��" << sizeof(arr[0][0]) << endl;

	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2����ȡ��ά������׵�ַ
	cout << "��ά������׵�ַ��" << (int)arr << endl;
	cout << "��ά����ĵ�һ�е�ַ��" << (int)arr[0] << endl;
	cout << "��ά����ĵڶ��е�ַ��" << (int)arr[1] << endl;
	cout << "��ά����ĵ�һ��Ԫ�صĵ�ַ��" << (int)&arr[0][0] << endl;
	cout << "��ά����ĵڶ���Ԫ�صĵ�ַ��" << (int)&arr[0][1] << endl;

	return 0;
}