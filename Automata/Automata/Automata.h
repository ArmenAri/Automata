#pragma once

#include<string>
#include<vector>
#include"Arrow.h"

class Automata
{
private:
	std::vector<Arrow> m_states;

public:
	Automata(std::vector<Arrow>);
	virtual ~Automata();

	std::string to_string();
};

