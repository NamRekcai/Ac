#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int len)//int arr[]也可以写成int* arr，当数组传入函数作为参数
//会被退化成为首元素的指针，会丢失数组长度这一信息，所以，我们还需要传递数组的长度
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