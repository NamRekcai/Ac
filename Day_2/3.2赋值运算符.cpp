#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0302()
{
	int a = 7;
	(a = 7) = 10;
	cout << "a=" << a << endl;
	return 0;
}