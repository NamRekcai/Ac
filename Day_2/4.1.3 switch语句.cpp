#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040103()
{
	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;

	switch (score)//���ʽ����ֻ�������ͻ������ַ���
	{
	case 10:case 9:
		cout << "����" << endl;
		break;
	case 8:case7:
		cout << "�ǳ���" << endl;
		break;
	case 6:case5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
	return 0;
}