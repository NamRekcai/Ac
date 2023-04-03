#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return (z);//return z;
}

int main()
{
	int a, b, m;
	cin >> a >> b;
	m = max(a, b);
	cout << "max=" << m << endl;
	return 0;
}