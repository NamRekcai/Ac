#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//struct Ĭ��Ȩ����public
struct s1
{
//private:
	int m_s1;
};

//class Ĭ��Ȩ����private
class c1
{
	int m_c1;
};


int main040102()
{
	s1 S1;
	S1.m_s1 = 10;

	c1 C1;
	//C1.m_c1 = 10; ���󣬷���Ȩ����˽��

	return 0;
}