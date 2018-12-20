#include "BigNum.h"

// constructor
BigNum::BigNum()
{
	is_neg = false;
	size = 1;
	data = new int[1];
	data[0] = 0;
}

BigNum::BigNum(int len, int val)
{
	this->is_neg = (val >= 0) ? false : true;
	if (is_neg == true)	val *= (-1);
	this->size = len;
	this->data = new int[len];
	for (int i = 0; i < len; i++)
	{
		// TODO
		// if len is wrong
		this->data[i] = val % BASE;
		val /= BASE;
	}
}

BigNum::BigNum(BigNum &other)
{
	this->is_neg = other.is_neg;
	this->size = other.size;
	this->data = other.get_data_copy();
}

// tools
int* BigNum::get_data_copy()
{
	int* data_copy = new int[this->size];
	for (int i = 0; i < this->size; i++)
		data_copy[i] = this->data[i];
	return data_copy;
}

void BigNum::print_sign()
{
	if (this->is_neg == false)
		cout << "+";
	else
		cout << "-";
}

void BigNum::print_data()
{
	for (int i = this->size - 1; i >= 0; i--)
		cout << this->data[i];
	cout << endl;
}

// operator
istream& operator>>(istream &is, BigNum big_num)
{
	
}

ostream& operator<<(ostream &os, const BigNum &big_num)
{
	if (big_num.is_neg == true)
		os << "-";
	for (int i = big_num.size - 1; i >= 0; i--)
		os << big_num.data[i];
	return os;
}