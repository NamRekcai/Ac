#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//���ݽ���
void swap(int num1, int num2)//�β�
{
	cout << "����ǰ��" << endl;
	cout << "num1=" <<num1<< endl;
	cout << "num2=" <<num2<< endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	
	//return ����ʡ�Բ�д��
	//return��
}

int main0604()
{
	int a = 10;
	int b = 20;//ʵ��

	swap(a, b);

	cout << "���������a=" << a << endl;
	cout << "���������b=" << b << endl;

	//����������С�����ڳ�Ϊ�βΣ���������ʱ����Ĳ�����Ϊʵ��
	//��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
	return 0;
}