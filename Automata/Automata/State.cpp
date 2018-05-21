#include "State.h"

State::State()
{
}

State::State(std::string name, bool is_final)
{
	m_name = name;
	m_is_final = is_final;
}

State::State(std::string name)
{
	m_name = name;
	m_is_final = false;
}

std::string State::get_name()
{
	return m_name;
}

bool State::is_final()
{
	return m_is_final;
}

State::~State()
{
}
