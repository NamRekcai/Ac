#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int* func()
{
	int a = 10;//���ͷ� a--����
	return &a;
}

int* func2()
{
	int* b = new int(20); //�����ռ俪��һ���ռ䣬�ռ��СΪint����20 b--ָ��
	return b;
}

int main0102()
{
	int* p = func();
	cout << *p << endl;
	//��Ҫ���ؾֲ������ĵ�ַ���������ν����һ��

	int* q = func2();
	cout << *q << endl;
	cout << *q << endl;
	cout << *q << endl;
	cout << *q << endl;
	//ȷʵ���ڴ��д���

	//˭��˭�ͷ�
	delete q;
	cout << *q << endl; //��ΪҰָ�루ʹ��δ��ʼ�����ڴ�"q"��


	return 0;
}