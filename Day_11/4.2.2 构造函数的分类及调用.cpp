#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1�����캯������
//���������ࣺ�вκ��޲Σ��޲��ֳ�ΪĬ�Ϲ��캯����

//�����ͷ��ࣺ��ͨ���캯�����������캯��

class Person
{
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "�޲ι��캯������" << endl;
	}

	//�вι��캯��
	Person(int a)
	{
		age = a;
		cout << "�вι��캯������" << endl;
	}

	//�������캯�������÷�ʽ�������ģ�������ʽ�ǿ������캯����
	//����һ��Person p����ȫ��������const��ȷ��ԭ����p�����ı�
	Person(const Person& p)
	{
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
	}

	//��������
	~Person()
	{
		cout << "������������" << endl;
	}

	int age;
};

void test01()
{
	//���ֵ��÷�ʽ
	
	//1�����ŷ�,����õķ���
	Person p;			//�����޲ι��캯��
	Person p1(10);		//�����вι��캯��
	cout << p1.age << endl;

	//Person p2();err
	//ע�⣺�����޲κ������ܼ����ţ�����������ű�������Ϊ����һ������������

	Person p3(p1);
	cout << p3.age << endl;//���ÿ������캯��


	//2����ʾ��
	Person p4 = Person(10);//�вι���
	Person p5 = Person(p4);//��������
	cout << p5.age << endl;
	//���ϣ���ֵ�������Ϊ���������
	//Person(10);//����д������������,ִ���굱ǰ���������� ���Ƽ�
	//Person(p5);//Ҳ����������
	//ע�⣺������Ҫʹ����������
	//ע�⣺�������ÿ������캯��ȥ��ʼ���������󣬱�������Ϊ�����Ƕ�������
	cout << p5.age << endl;


	//3����ʽת����
	Person p6 = 10;//�൱�� Person p6=Person(10);
	Person p7 = p6;//�൱�� Person p7=Person(p6);
	//���Ҫ��������������Ҫʹ�ô�����

}	

int main()
{
	test01();
	return 0;
}