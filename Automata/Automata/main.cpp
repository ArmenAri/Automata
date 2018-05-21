#include<iostream>
#include"State.h"
#include"Automata.h"
#include"Arrow.h"

int main() {
	std::cout << "Automata Project" << std::endl;

	srand(time(NULL));

	State q1("q1");
	State q0("q0");
	State q2("q2");
	State q3("q3", true);


	Arrow a0("a", q0, q1);
	Arrow a1("b", q1, q1);
	Arrow a2("a", q1, q2);
	Arrow a3("b", q2, q2);
	Arrow a4("a", q2, q3);


	std::vector<Arrow> states;

	states.push_back(a0);
	states.push_back(a1);
	states.push_back(a2);
	states.push_back(a3);
	states.push_back(a4);

	Automata a(states);

	std::cout << a.to_string() << std::endl;
	//std::cout << a.build_random_word(10) << std::endl;
	//std::cout << a.contains("") << std::endl;

	system("pause");
	return 0;
}