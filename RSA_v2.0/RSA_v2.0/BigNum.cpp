#include "BigNum.h"

// ----- begin constructor -----
BigNum::BigNum()
{
	// default number = 0
	is_neg = false;
	bn_len = 1;
	bn_val = '0';
}

BigNum::BigNum(const char *val)
{
	string tmp_str(val);

	if (tmp_str[0] == '-')
	{
		is_neg = true;
		tmp_str.erase(0, 1);
	}
	else
	{
		is_neg = false;
	}
	bn_len = tmp_str.length();
	reverse(tmp_str.begin(), tmp_str.end());
	bn_val = tmp_str;
}
// ----- end constructor -----

// ----- begin operator of ">> and <<" -----
istream& operator>>(istream &is, BigNum &bn)
{
	string tmp_str;
	is >> tmp_str;
	// TODO : if user inputs "abc" or "-1 2"
	if (tmp_str[0] == '-')
	{
		bn.is_neg = true;
		tmp_str.erase(0, 1);
	}
	else
	{
		bn.is_neg = false;
	}
	bn.bn_len = tmp_str.length();
	reverse(tmp_str.begin(), tmp_str.end());
	bn.bn_val = tmp_str;
	return is;
}

ostream& operator<<(ostream &os, const BigNum &bn)
{
	if (bn.is_neg == true)
		os << "-";

	// other printing method
	/*
	string tmp_str = bn.bn_val;
	reverse(tmp_str.begin(), tmp_str.end());
	os << tmp_str;
	*/
	for (int i = bn.bn_len - 1; i >= 0; i--)
		os << bn.bn_val[i];
	return os;
}
// ------ end operator of ">> and <<" -----