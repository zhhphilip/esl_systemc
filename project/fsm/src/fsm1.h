/*
 * fsm1.h
 *
 *  Created on: 2014年5月29日
 *      Author: SPREADTRUM\ansonn.wang
 */

#ifndef FSM1_H_
#define FSM1_H_
#include <systemc.h>


enum state_t{
	SO = 0,
	S1,
	S2
};


SC_MODULE(fsm_1)
{
	sc_in_clk				clk;
	sc_in<bool>			rst;
	sc_in<bool>			input1;
	sc_in<bool>			input2;
	sc_out<bool>			a;
	sc_out<bool>			b;
	sc_signal<state_t>	state;
	sc_signal<state_t>	next_state;

	void ns_op_logic();
	void update_state();

	SC_CTOR(fsm_1)
	{
		SC_METHOD(update_state);
		sensitive_pos << clk;

		SC_METHOD(ns_op_logic);
		sensitive << state << input1 << input2;
	}
};


#endif /* FSM1_H_ */
