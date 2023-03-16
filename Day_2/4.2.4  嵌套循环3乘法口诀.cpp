#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main04020403()
{
	int i = 0, j = 0;
	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= j; i++)
		{
			cout << i << "*" << j << "=" << i * j << " ";
		}
		cout << endl;
	}
	
	return 0;
}