#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	int m_A;						//�Ǿ�̬��Ա������ռ����ռ�		
	static int m_B;					//��̬��Ա��������ռ����ռ�
	void func(){}					//������ռ����ռ䣬���к�������һ������
	static void func2(){}			//��̬��Ա����Ҳ��ռ����ռ�

};

int Person::m_B = 10;

class B
{

};

int main()
{
	Person p;
	cout << sizeof(p) << endl;

	B b;
	cout << sizeof(b) << endl;
	//�ն���ռ�ÿռ�Ϊ1����ΪC++����������ն���Ҳ����һ���ֽڿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
	//��ÿ������Ӧ���ж�һ�޶��Ŀռ䣩


	return 0;
}