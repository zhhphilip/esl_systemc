//============================================================================
// Name        : TestSC.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <systemc.h>
using namespace std;

int sc_main(int, char *[])
{
	sc_uint<13> a = 0;
	sc_int<32> b = -1;
	sc_int<32> c = 90;
	sc_bv<6> d = "110010";
	sc_lv<6> e = "1100X0";

	a = b;

	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	cout << "e=" << e << endl;

	return 0;

}
