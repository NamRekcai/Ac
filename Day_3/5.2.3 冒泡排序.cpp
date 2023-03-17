#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main050203()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 8 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}

	for (i = 0; i < 9; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}

	return 0;
}