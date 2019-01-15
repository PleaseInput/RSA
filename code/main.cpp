#include "BigNum.h"

int main()
{
	BigNum a, b;
	BigNum ans;
	while (1)
	{
		cin >> a >> b;
		ans = a + b;
		cout << ans << "\n";
	}
	/*
	BigNum a("35"), b("67");
	BigNum ans;
	ans = a + b;
	cout << ans << "\n";
	*/
	//cout << (a == b) << " " << (a < b) << " " << (a > b) << "\n";
	//string a("42"), b("53");
	//cout << a.length();
	
	/*
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int p = (i + j) / 10;
			cout << p << ", ";
		}
		cout << "\n";
	}
	cout << "\n";
	*/
	return 0;
}