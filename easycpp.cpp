#include <iostream>
using namespace std;

int quxwei(int m,int n)  //m��ԭ����,n�ǵ�Ҫȡ�ĵڼ�λ
{
	while (n > 1)
	{
		m = m / 10;
		n--;
 }
	m = m % 10;
	return m;
}
