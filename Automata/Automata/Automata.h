#pragma once

#include<string>
#include<vector>
#include<iostream>
#include"Arrow.h"
#include<time.h>

#define MAX_ITER 10000

class Automata
{
private:
	std::vector<Arrow> m_arrows;

public:
	Automata(std::vector<Arrow>);
	virtual ~Automata();

	std::string build_random_word(int);
	bool contains(std::string);

	std::string to_string();
};