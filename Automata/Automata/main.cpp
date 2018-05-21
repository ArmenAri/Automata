#include<iostream>
#include"State.h"
#include"Automata.h"
#include"Arrow.h"

int main() {
	std::cout << "Automata Project" << std::endl;
	
	State q2("q2", true);
	State q1("q1", false);
	State q0("q0", false);

	Arrow a1("a", q0, q1);
	Arrow a2("b", q1, q2);

	std::vector<Arrow> states;

	states.push_back(a1);
	states.push_back(a2);

	Automata a(states);

	std::cout << a.to_string() << std::endl;

	system("pause");
	return 0;
}