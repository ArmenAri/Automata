#pragma once

#include <string>
#include "State.h"

class Arrow
{
private:
	std::string m_content;
	State m_src;
	State m_dest;

public:
	Arrow();

	/*
	*@param : content, src, dest
	*/
	Arrow(std::string, State, State);

	std::string to_string();
	State get_src();
	State get_dest();
	std::string get_content();
	virtual ~Arrow();
};

