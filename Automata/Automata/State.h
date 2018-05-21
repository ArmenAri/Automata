#pragma once

#include <string>

class State
{
private:
	std::string m_name;
	bool m_is_final;

public:
	State();

	/*
	*@param : name, child, is_final
	*/
	State(std::string, bool);

	std::string get_name();
	bool is_final();
	virtual ~State();
};

