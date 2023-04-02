#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//抽象制作饮品
class AbstractDringking
{
public:
	//烧水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSometing() = 0;

	//规定流程
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSometing();

	}
};

//制作咖啡
class Coffee :public AbstractDringking
{
public:
	//烧水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "将咖啡倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSometing()
	{
		cout << "加入牛奶" << endl;
	}
};

//制作茶水
class Tea :public AbstractDringking
{
public:
	//烧水
	virtual void Boil()
	{
		cout << "煮自来水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "将茶水倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSometing()
	{
		cout << "加入枸杞" << endl;
	}
};

//业务函数
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
