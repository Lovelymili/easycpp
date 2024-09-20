#include <iostream>
using namespace std;

int quxwei(int m,int n)  //m是原数字,n是第要取的第几位
{
	while (n > 1)
	{
		m = m / 10;
		n--;
 }
	m = m % 10;
	return m;
}
