#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯���ĵ��ã�" << endl;
	}
	~Base()
	{
		cout << "Base�����������ĵ��ã�" << endl;
	}
};

class son : public Base
{
public:
	son()
	{
		cout << "son�Ĺ��캯���ĵ��ã�" << endl;
	}
	~son()
	{
		cout << "son�����������ĵ��ã�" << endl;
	}
};

void test01()
{
	son s;
	//�̳��У��ȵ��ø��๹�캯�����ٵ������๹�캯���������빹��˳���෴
}

int main()
{
	test01();
	return 0;
}