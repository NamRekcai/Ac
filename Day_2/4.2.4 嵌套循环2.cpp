#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main04020402()
{
	int num = 0;
	for (num = 1; num <= 100; num++)
	{
		if (num % 10 == 7 || num % 100 / 10 == 7 || num % 7 == 0)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	return 0;
}