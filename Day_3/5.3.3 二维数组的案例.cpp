#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main050303()
{
	int scores[3][3]
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "����","����","����" };
	
	int i, j; //��i����ѧ������j����ÿ�ſγɼ�
	for (i = 0; i < 3; i++)
	{
		int sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "ͬѧ�ܳɼ�Ϊ��" << sum << endl;
	}

	return 0;
}