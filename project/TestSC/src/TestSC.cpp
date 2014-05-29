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
	sc_trace_file *pf = NULL;

	a = b;

	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	cout << "e=" << e << endl;

	sc_clock clk("main_clk", 10, SC_NS, 0.5);

	pf = sc_create_vcd_trace_file("test_sc");

	sc_trace(pf, clk, "main_clk");
	sc_trace(pf, b, "b");
	sc_trace(pf, d, "d");
	sc_trace(pf, e, "e");
	sc_start(1000, SC_NS, SC_RUN_TO_TIME);

	sc_close_vcd_trace_file(pf);
	cout << "exit" << endl;

	return 0;

}
