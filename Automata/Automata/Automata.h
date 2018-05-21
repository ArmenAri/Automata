#pragma once

#include<string>
#include<vector>
#include<iostream>
#include"Arrow.h"
#include<time.h>

class Automata
{
private:
	std::vector<Arrow> m_arrows;

public:
	Automata(std::vector<Arrow>);
	virtual ~Automata();
	std::string build_random_word(int);
	std::string to_string();
};

