#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/**************************************
案例需求：
输入m，n，求m到n（包含m，n）所有素数的和。
素数：除1以外只能被自身整除的自然数
**************************************/

bool isPrime(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			break;
		}
		
	}
	if (x == i)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main0608()
{
	int num = 0;
	int m = 0;
	int n = 0;
	int sum = 0;
	cin >> m >> n;
	for (num = m; num <=n; num++)
	{
		if (isPrime(num))
		{
			sum += num;
		}
	}
	cout << sum << endl;
	return 0;
}