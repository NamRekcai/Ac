#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�����̳�
class base1
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son1 :public base1
{
public:
	void func()
	{
		a = 10;		//�����еĹ���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ��
		b = 10;		//�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		//c = 10;	//�����е�˽��Ȩ�޳�Ա���������з��ʲ���
	}
};

void test01()
{
	son1 s1;
	s1.a = 100;		//����ֻ�ܷ��ʹ���Ȩ��
	//s1.b = 100;	//son1��b�Ǳ���Ȩ�ޣ�������ʲ���
	//s1.c = 100;

}

//�����̳�
class base2
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son2 :protected base2
{
public:
	void func()
	{
		a = 10;		//�����еĹ���Ȩ�޳�Ա������������Ȼ���Է���
		b = 10;		//�����еı���Ȩ�޳�Ա������������Ȼ���Է���
		//c = 10;	//�����е�˽��Ȩ�޳�Ա���������з��ʲ���
	}
};

void test02()
{
	son2 s2;
	//s2.a = 100;	//s2��a��Ϊ����Ȩ�ޣ�������ʲ���
	//s2.b = 100;	//s2��b�Ǳ���Ȩ�ޣ�������ʲ���
	//s2.c = 100;	//s2��c��˽��Ȩ�ޣ�������ʲ���
}

//˽�м̳�
class base3
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son3 :private base3
{
public:
	void func()
	{
		a = 10;		//�����еĹ���Ȩ�޳�Ա������������Ȼ���Է���
		b = 10;		//�����еı���Ȩ�޳�Ա������������Ȼ���Է���
		//c = 10;	//�����е�˽��Ȩ�޳�Ա���������з��ʲ���
	}
};

void test03()
{
	son 3 s3;
	//s3.a = 100;	//�����еĹ���Ȩ�޳�Ա����������˽��Ȩ��
	//s3.b = 100;	//�����еı���Ȩ�޳�Ա����������˽��Ȩ��
	//s3.c = 100;	//s2��c��˽��Ȩ�ޣ�������ʲ���
}


int main()
{

	return 0;
}