/*
* (1)
* In BigNum, we use "size" and "data". However,
* in parameter and function, we use "len" and "val"
* which mean "length" and "value" respectively,
*
* (2)
* tmp_something is a temporary variable of something.
* e.g. tmp_int, tmp_char and so on.
*
* (3)
* about the format of "*" and "&"
* e.g. "int*" and "int *num" 
*/
#pragma once
#include <iostream>
#define BASE 10
using namespace std;

class BigNum {
	private:
		bool is_neg;
		int size;
		int *data;
	public:
		// constructor
		BigNum();
		BigNum(int len, int val);
		BigNum(BigNum &other);
		
		// tools
		int* get_data_copy();
		void print_sign();
		void print_data();

		// operator
		friend istream& operator>>(istream &is, BigNum big_num);
		friend ostream& operator<<(ostream &os, const BigNum &big_num);
		
};