#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//���ز��ֱ�������
int& test01()
{
	int a = 10;//�ֲ�����
	return a;
}

//���ؾ�̬��������
int& test02()
{
	static int b = 20;
	return b;
}

int main0204()
{

	//���ܷ��ؾֲ�����������
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;

	int& ref2 = test02();
	cout << ref2 << endl;

	//��������ֵ�����뷵������
	test02()=1000;//���ص���b������ b=1000
	cout << ref2 << endl;

	return 0;
}