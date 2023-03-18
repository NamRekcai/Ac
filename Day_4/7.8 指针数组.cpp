#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0708()
{
	int a = 1;
	int b = 2;
	int c = 3;
	
	int* arr_p[3];
	arr_p[0] = &a;
	arr_p[1] = &b;
	arr_p[2] = &c;

	for (int i = 0; i < sizeof(arr_p) / sizeof(arr_p[0]); i++)
	{
		cout << *(arr_p[i]) << endl;
	}

	return 0;
}