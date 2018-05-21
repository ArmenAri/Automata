#include "Automata.h"

Automata::Automata(std::vector<Arrow> states)
{
		m_arrows = states;
}

Automata::~Automata()
{
}

std::string Automata::build_random_word(int size)
{
	int i = 0;
	std::string word;
	std::string symbol;
	State curr = m_arrows[0].get_src();
	State next;
	Arrow currArrow = m_arrows[0];
	srand(time(NULL));
	int rand;
	do  {
		rand = std::rand() % 5;
		for (Arrow a : m_arrows) {
			if (a.get_src().get_name() == curr.get_name()) {
				next = a.get_dest();
				currArrow = a;
			}
			if (currArrow.get_src().get_name() == currArrow.get_dest().get_name()) {
				for (int k = 0; k < rand; k++) {
					word += currArrow.get_content();
				}
			}
		}
		word += currArrow.get_content();
		curr = next;
		i++;
	} while (!curr.is_final() && i <= size);
	return word;
}

std::string Automata::to_string()
{
	std::string str;
	State old_src;
	State src;
	for (Arrow a : m_arrows) {
		src = a.get_src();
		if (a.get_src().is_final()) str += "F";
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
