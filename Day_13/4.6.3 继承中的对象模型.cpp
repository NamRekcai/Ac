#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
};

//�����̳�
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
	//�����е����зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
}

int main() {

	test01();

	return 0;
}