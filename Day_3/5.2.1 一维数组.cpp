#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main050201()
{
	//���巽ʽ1
	//���ݽṹ ��������[Ԫ�ظ���];
	int score[10];

	//���������±긳ֵ
	score[0] = 100;
	score[1] = 90;
	score[2] = 85;

	//���������±�������飬�����ӡ����Ļ��
	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;

	//���巽ʽ2
	//�������� ��������[Ԫ�ظ���]={ ֵ1��ֵ2,������}��
	//���{}�ڲ���10Ԫ�أ�ʣ�µ�������0��ȫ��
	int score2[10] = { 100,90,80,70,60,50,40,30,20,10 };
	int score3[10] = { 100,90,80 };

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "score2[" << i << "]=" << score2[i] << endl;
	}

	//��������
	for (i = 9; i >= 0; i--)
	{
		cin >> score3[i];
	}

	for (i = 0; i < 10; i++)
	{
		cout << "score3[" << i << "]=" << score3[i] << endl;
	}
	//���巽ʽ3
	//�������� ��������[]={ֵ1��ֵ2��������};
	int score4[] = { 100,90,80,70 };
	
	return 0;
}