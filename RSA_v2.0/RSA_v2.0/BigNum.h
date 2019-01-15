/*
* (1)
* In BigNum class, the autor uses "bn_len" and "bn_val". However,
* in parameter and function, and uses "len" and "val"
* which mean "length" and "value" respectively.
*
* (2)
* tmp_something is a temporary variable of something.
* e.g. tmp_int, tmp_char and so on.
*
* (3)
* about the format of "*" and "&"
* e.g. "int*" and "int *num" 
*
* (4)
* -2's bn_len is 1, only including the part of number.
*
* (5)
* bn : big number
*/
#pragma once
#include <algorithm>
#include <iostream>
#include <string>
#define BASE 10
typedef unsigned int uint;
using namespace std;

class BigNum {
	private:
		bool is_neg;
		uint bn_len;
		string bn_val;
	public:
		// constructor
		BigNum();
		BigNum(const char *val);
		
		// operator
		friend istream& operator>>(istream &is, BigNum &bn);
		friend ostream& operator<<(ostream &os, const BigNum &bn);
		
};