#include <iostream>
using namespace std;

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myAdd01(a, c) << endl;//��ȷ�ģ���char���͵�'c'��ʽת��Ϊint���ͣ�'c'��Ӧ��ASCII��99
	//myAdd02(a, c);
	cout << myAdd02<int>(a, c) << endl;//��ȷ�ģ��������ʾָ�����ͣ����Է�����ʽ����ת��
}

int main()
{
	test01();
	return EXIT_SUCCESS;
}