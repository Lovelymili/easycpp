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

double sishewuru(double x , int n) //x����Ҫ�������������,n���������뵽�ڼ�λ
{
	try {
		cin >> x;
		if (cin.fail())
			throw invalid_argument("����x��������");
		try {
			cin >> n;
			if (cin.fail())
				throw invalid_argument("����n��������");
			x = x * pow(10, n);
			if (x - floor(x) >= 0, 5)
			{
				x = x - (x - floor(x));
				++x;
				x = x / 100;
			}
			else
			{
				x = x - (x - floor(x));
				x = x / 100;
			}
			return x;
		}
		catch (invalid_argument)
		{
			cout << "sishewuru��������n�������!";
		}
	}
	catch (invalid_argument)
	{
		cout << "sishewuru��������m�������!";
	}

}