//��д���򣬴Ӽ���������һ���ַ��������ַ��������ַ�������Ļ�������Ӧ���������֡�
//�����������ַ����������Ӧ��ʾ:���ⲻ��һ�������ַ�����


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main1034()
{
	//����һ���ַ��ͱ���ch
	char ch = 0;
	//����һ���ַ�
	cin >> ch;
	//���ַ��������ַ�������Ļ�������Ӧ����������
	if (ch >= '0' && ch <= '9')
	{
		int cha = ch - '0';
		cout << cha << endl;
	}
	//�����������ַ����������Ӧ��ʾ:���ⲻ��һ�������ַ�����
	else
	{
		cout << "�ⲻ��һ�������ַ�" << endl;
	}
	return 0;
}