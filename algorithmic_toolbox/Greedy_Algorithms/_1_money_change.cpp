#include <bits/stdc++.h>
using namespace std;

int get_change(int m)
{
	int d_one = 1;
	int d_five = 5;
	int d_ten = 10;
	int numOfCoins = 0;
	while (m > 0)
	{
		if (m >= d_ten)
		{
			m -= d_ten;
		}
		else if (m >= d_five)
		{
			m -= d_five;
		}
		else if (m >= d_one)
		{
			m -= d_one;
		}
		numOfCoins++;
	}
	return numOfCoins;
}

int main()
{
	int money;
	cin >> money;
	cout << get_change(money) << endl;
	return 0;
}
