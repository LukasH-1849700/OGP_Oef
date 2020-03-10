#include "Comic.h"
#include <string>

Comic::Comic(const std::string& n, const double& p, const int& isbn, const std::vector<std::string>& authors, 
			 const std::string& series_name, const int& series_number)
	: Book{ n, p, isbn, authors }, m_series_name{series_name}, m_series_number{series_number}
{}

std::string Comic::get_series_name() const
{
	return m_series_name;
}
int Comic::get_series_number() const
{
	return m_series_number;
}

void Comic::set_series_name(const std::string& series_name)
{
	m_series_name = series_name;
}
void Comic::set_series_number(const int& series_number)
{
	m_series_number = series_number;
}
