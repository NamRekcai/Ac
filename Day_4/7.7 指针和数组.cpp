#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main0707()
{
	double arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = arr;

	cout << "��һ��Ԫ�أ�" << arr[0] << endl;
	cout << "��ָ����ʵ�һ��Ԫ�أ�" << *p << endl;

	cout << "�ڶ���Ԫ�أ�" << arr[2] << endl;
	cout << "��ָ����ʵڶ���Ԫ�أ�" << *(p + 1) << endl; 

	//����ָ������������
	for (int i = 0; i < 10 ; i++)
	{
		cout << *(p+i) << endl; 
	}

	return 0;
}