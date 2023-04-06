#include<iostream>
using namespace std;

template<class T>
class Base
{
	T m;
};

//class Son : public Base //����C++������Ҫ����������ڴ棬����֪��������T������
//�ſ������¼̳�
class Son : public Base<int> //����ָ��һ������
{

};

void test01()
{
	Son c;
}

//��ģ��̳���ģ�壬������T2ָ�������е�T����
template<class T1, class T2>
class Son2 : public Base<T2>
{
public:
	Son2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};

void test02()
{
	Son2<int, char> c2;
}

int main()
{
	test01();
	test02();
	return 0;
}