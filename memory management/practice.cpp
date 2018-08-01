#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
	int *p = new int[1000];
	if (NULL == p)
	{
		system("pause");
		return 0;
	}
	p[0] = 10;
	p[1] = 20;
	cout << p[0]<<"," << endl;
	delete []p;
	p = NULL;
	system("pause");
	return 0;
}