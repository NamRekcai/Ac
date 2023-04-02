#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//����9+6=5�����⣡

void add(char* num1, char* num2, char* rst, int len1, int len2)
{
	int i, j, k;
	int carry = 0;
	for (i = len1 - 1, j = len2 - 1, k = len1 - 1; i >= 0; i--, j--, k--)
	{
		//ת����intȥ����
		int intNum1 = num1[i] - '0';
		int intNum2 = num2[j] - '0';
		int result = 0;

		if (j >= 0)
			result = intNum1 + intNum2;
		else
			result = intNum1 + 0;

		//�����λ
		if (carry != 0)
		{
			result += carry;
			carry = 0;
		}
		if (result >= 10)
		{
			carry = result / 10;
			result %= 10;
		}

		rst[k] = result + '0';//����ٽ�intת��Ϊchar
	}
}

int main()
{
	char num1[100000] = { 0 };
	char num2[100000] = { 0 };
	char rst[100000] = { 0 };
	cin >> num1 >> num2;
	int len1 = strlen(num1);
	int len2 = strlen(num2);

	if (len1 >= len2)
		add(num1, num2, rst, len1, len2);
	else
		add(num2, num1, rst, len2, len1);


	//��ӡ���
	int i = 0;
	for (i = 0; rst[i] == '0'; i++);
	for (; rst[i] != '\0'; i++)
		cout << rst[i];

	return 0;
}