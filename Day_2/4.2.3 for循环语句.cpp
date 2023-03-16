#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main040203()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	//上面的for语句与while语句等价
	/*i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}*/
	return 0;
}