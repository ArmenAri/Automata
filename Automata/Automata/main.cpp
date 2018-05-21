#include<iostream>
#include"State.h"
#include"Automata.h"
#include"Arrow.h"

int main() {
	std::cout << "Automata Project" << std::endl;

	srand(time(NULL));

	State q1("q1", false);
	State q0("q0", false);
	State q2("q2", false);
	State q3("q3", true);


	Arrow a0("a", q0, q1);
	Arrow a1("a", q1, q2);
	Arrow a2("b", q2, q2);
	Arrow a3("a", q2, q3);


	std::vector<Arrow> states;

	states.push_back(a0);
	states.push_back(a1);
	states.push_back(a2);
	states.push_back(a3);

	Automata a(states);

	std::cout << a.to_string() << std::endl;
	std::cout << ((a.contains("aaba")) ? "true" : "false") << std::endl;

	system("pause");
	return 0;
}