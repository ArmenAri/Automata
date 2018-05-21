#include<iostream>
#include"State.h"
#include"Automata.h"
#include"Arrow.h"

int main() {
	std::cout << "Automata Project" << std::endl;

	State q2("q2", false);
	State q1("q1", false);
	State q0("q0", false);

	Arrow a0("b", q0, q0);
	Arrow a1("a", q0, q1);
	Arrow a2("b", q1, q2);
	Arrow a3("c", q2, q0);

	std::vector<Arrow> states;

	states.push_back(a0);
	states.push_back(a1);
	states.push_back(a2);
	states.push_back(a3);

	Automata a(states);

	std::cout << a.to_string() << std::endl;
	std::cout << a.build_random_word(1000) << std::endl;
	system("pause");
	return 0;
}