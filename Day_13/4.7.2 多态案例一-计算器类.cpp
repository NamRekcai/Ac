#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//普通实现
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
			return m_Num1 + m_Num2;
		else if (oper == "-")
			return m_Num1 - m_Num2;
		else if (oper == "*")
			return m_Num1 * m_Num2;
	}


	int m_Num1;
	int m_Num2;
	//如果要提供新的运算，需要修改源码
	//在真实开发环境中，提倡开闭原则
	//开闭原则：对扩展进行开放，对修改进行关闭
};

void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;

}

//多态实现
//抽象类计算器
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//加法类计算器
class AddCalculator : public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法类计算器
class SubCalculator : public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法类计算器
class MulCalculator : public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展和维护
	//多态使用条件：父类指针或引用指向子类对象
	//创建一个加法计算器
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//创建一个减法计算器
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//创建一个乘法计算器
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}

int main()
{
	test02();
	//test01();
	return 0;
}