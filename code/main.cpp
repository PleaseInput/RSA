#include "BigNum.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	
	BigNum a, b;
	BigNum ans_bn, tmp;

	int x, y;
	int ans_i;

	srand(time(NULL));

	char c;
	string t;
	

	//for(int i=0;i<255;i++)
	//	cout << i << " th is \"" << char(i) << "\"\n";

	/*
	cin >> a >> b;
	ans_bn = a * b;
	cout << ans_bn << "\n";
	*/

	
	for(int i=0; i < 200000; i++)
	{
		cout << "the " << i << " times\n";
		x = rand();
		y = rand();
		if (rand() % 2)	x = -x;
		if (rand() % 2)	y = -y;
		a.set_val(to_string(x));
		b.set_val(to_string(y));

		ans_i = x * y;		
		ans_bn = a * b;
		
		tmp.set_val(to_string(ans_i));
		if (!(tmp == ans_bn))
		{
			cout << x << " * " << y << " = " << ans_i << "\n";
			cout << a << " * " << b << " = " << ans_bn << "\n";
			getchar();
		}
	}
	

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