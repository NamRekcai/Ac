#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05020202()
{
	//1������һ���ռ��СΪ5��С������
	int arr[5] = { 30,70,90,100,10 };

	//2���Ƚϳ�˭���������
	int i = 0;
	int max = arr[0];
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "��ֻС����������Ϊ��" << max << endl;
	return 0;
}