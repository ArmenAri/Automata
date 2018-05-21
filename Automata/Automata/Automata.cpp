#include "Automata.h"

Automata::Automata(std::vector<Arrow> states)
{
	m_states = states;
}

Automata::~Automata()
{
}

std::string Automata::to_string()
{
	std::string str;
	State old_src;
	State src;
	for (Arrow a : m_states) {
		src = a.get_src();
		if (old_src.get_name() == src.get_name()) {
			str += a.to_string() + a.get_dest().get_name();
		}
		else {
			str += a.get_src().get_name() + a.to_string() + a.get_dest().get_name();
		}
		old_src = a.get_dest();
	}
	return str;
}
