#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/**************************************
��������
����m��n����m��n������m��n�����������ĺ͡�
��������1����ֻ�ܱ�������������Ȼ��
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