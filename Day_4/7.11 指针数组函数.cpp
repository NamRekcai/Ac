#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int len)//int arr[]Ҳ����д��int* arr�������鴫�뺯����Ϊ����
//�ᱻ�˻���Ϊ��Ԫ�ص�ָ�룬�ᶪʧ���鳤����һ��Ϣ�����ԣ����ǻ���Ҫ��������ĳ���
{
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr+j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

void print(int*arr,int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << *(arr + i) << endl;
	}
}

int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	bubbleSort(arr, 10);
	print(arr, 10);
	return 0;
}