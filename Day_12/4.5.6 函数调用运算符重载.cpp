#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void test01()
{
	Myprint myprint;
	myprint("Hello World"); //����ʹ�������ǳ���������˳�Ϊ�º�����
}

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test02()
{
	MyAdd add;
	int ret = add(10, 10);
	cout << ret << endl;
	//С�᣺
	//���������ǣ�������+ʵ���б�
	//��������ص����ǣ�����+ʵ���б�
	cout << "MyAdd()(100, 100): " << MyAdd()(100, 100) << endl;
	//����������ã�����(): ��������
}

int main()
{
	test01();
	test02();
	return 0;
}