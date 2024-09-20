#include <iostream>
#include <string>

using namespace std;

int quxwei_1(int m, int n)  //m是原数字,n是第要取的第几位
{
	while (n > 1)
	{
		m = m / 10;
		n--;
	}
	m = m % 10;
	return m;
}
int quxwei_2(int m, int n) //m是原数字,n是第要取的第几位
{
	string str = std::to_string(m);
	return str.at(-n);

}
double sishewuru(double x, int n) //x是需要四舍五入的数字,n是四舍五入到第几位
{
	try {
		cin >> x;
		if (cin.fail())
			throw invalid_argument("参数x不是数字");
		try {
			cin >> n;
			if (cin.fail())
				throw invalid_argument("参数n不是整数");
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
			cout << "sishewuru函数参数n输入错误!";
		}
	}
	catch (invalid_argument)
	{
		cout << "sishewuru函数参数m输入错误!";
	}

}