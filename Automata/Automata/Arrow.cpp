#include "Arrow.h"

Arrow::Arrow(std::string content, State src, State dest)
{
	m_content = content;
	m_src = src;
	m_dest = dest;
}

Arrow::Arrow()
{
}

std::string Arrow::to_string()
{
	return  "-" + m_content + "->";
}

State Arrow::get_src() {
	return m_src;
}

State Arrow::get_dest() {
	return m_dest;
}

std::string Arrow::get_content()
{
	return m_content;
}

Arrow::~Arrow()
{

}
