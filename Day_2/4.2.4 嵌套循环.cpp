#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040204()
{
	int i = 0;
	int j = 0;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	return EXIT_SUCCESS;
}