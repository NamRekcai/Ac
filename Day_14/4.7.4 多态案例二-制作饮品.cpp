#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//����������Ʒ
class AbstractDringking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSometing() = 0;

	//�涨����
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSometing();

	}
};

//��������
class Coffee :public AbstractDringking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "�����ȵ��뱭��" << endl;
	}
	//���븨��
	virtual void PutSometing()
	{
		cout << "����ţ��" << endl;
	}
};

//������ˮ
class Tea :public AbstractDringking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "������ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "����ˮ���뱭��" << endl;
	}
	//���븨��
	virtual void PutSometing()
	{
		cout << "�������" << endl;
	}
};

//ҵ����
void doWork(AbstractDringking* drink)
{
	drink->MakeDrink();
	delete drink;
}

void test01()
{
	doWork(new Coffee);//AbstractDrinking* abs = new Coffee;
	cout << "-----------------------" << endl;
	doWork(new Tea);
}


int main()
{
	test01();

	return 0;
}
