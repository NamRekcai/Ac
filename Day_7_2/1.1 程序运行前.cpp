#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 20;

//ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;

int main0101()
{
	//�ֲ�����
	int a = 10;
	int b = 20;

	//��̬����
	static int s_a = 10;
	static int s_b = 20;

	//�ֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;

	//��ӡ��ַ
	cout << "�ֲ�����a��ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b��ַΪ��" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a��ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b��ַΪ��" << (int)&g_b << endl;

	cout << "��̬����s_a��ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b��ַΪ��" << (int)&s_b << endl;

	cout << "ȫ�ֱ���c_g_a��ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֱ���c_g_b��ַΪ��" << (int)&c_g_b << endl;

	cout << "�ַ���������ַΪ��" << (int) &"Hello" << endl;
	cout << "�ַ���������ַΪ��" << (int) &"World" << endl;

	cout << "�ֲ�������ַΪ��" << (int) &c_l_a << endl;
	cout << "�ֲ�������ַΪ��" << (int) &c_l_b << endl;

	return 0;
}