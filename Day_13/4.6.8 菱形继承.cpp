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
	//������̳п��Խ�����μ̳е����⣬ֻ��Ҫ�ڼ̳�ǰ�����virtual�ؼ��ּ��ɡ�
	SheepTuo st;
	st.Sheep::m_Age = 100;
	//st.Tuo::m_Age =200;
	//С�᣺�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������������

	//���յ�����ֻ��Ҫһ�ݾ͹��ˣ����μ̳лᵼ�����������ݣ���Դ�˷�

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

}
int main()
{
	test01();

	return 0;
}