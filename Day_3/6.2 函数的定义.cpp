#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//ʵ�֣��ó���������֮��
/*
�������﷨
����ֵ���� �������������б�
{
	���������
	return ���ʽ
}
*/

//�����Ķ��壺
int add(int num1, int num2)//�����е�num1 num2��Ϊ�β�
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	//������ʹ�ã����ã�
	//����������������
	int c = add(a, b);//����ʱ��a��b��Ϊʵ�ʲ��������ʵ��
	cout << c << endl;
	return 0;
}