#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040101()
{
	int score = 0;
	cout << "�����������" << endl;
	cin >> score;

	cout << "���������ǣ�" << score << endl;

	//if��䣺�������������ִ������Ĵ���

	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ��" << endl;
		if (score > 700)
		{
			cout << "�ҿ����˱���" << endl;
		}
		else if (score > 650)
		{
			cout << "�ҿ������廪" << endl;
		}
		else
		{
			cout << "�ҿ������˴�" << endl;
		}
	}
	else if(score>500)
	{
		cout << "�ҿ��϶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "�ҿ���������ѧ" << endl;
	}
	else
	{
		cout << "��û�п��ϱ���" << endl;
	}
	return 0;
}