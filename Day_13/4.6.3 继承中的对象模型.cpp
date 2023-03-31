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
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
	//父类中的所有非静态成员属性都会被子类继承下去
}

int main() {

	test01();

	return 0;
}