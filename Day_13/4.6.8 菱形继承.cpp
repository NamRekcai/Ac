#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	int m_Age;

};

class Sheep :virtual public Animal {};
class Tuo : virtual public Animal {};
class SheepTuo:public Sheep,public Tuo{};

void test01()
{
	//利用虚继承可以解决菱形继承的问题，只需要在继承前面加上virtual关键字即可。
	SheepTuo st;
	st.Sheep::m_Age = 100;
	//st.Tuo::m_Age =200;
	//小结：当菱形继承，两个父亲拥有相同数据，需要加作用于来区分

	//羊驼的年龄只需要一份就够了，菱形继承会导致数据有两份，资源浪费

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

}
int main()
{
	test01();

	return 0;
}