#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040301()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	return 0;
}