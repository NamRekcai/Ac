#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040302()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
}