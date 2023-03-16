#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main04010102()
{
	int A = 0;
	int B = 0;
	int C = 0;
	cin >> A >> B >> C;

	if (A > B)
	{
		if (A > C)
		{
			cout << "A" << endl;
		}
		else
		{
			cout << "C" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "B" << endl;
		}
		else
		{
			cout << "C" << endl;
		}
	}
	return 0;
}