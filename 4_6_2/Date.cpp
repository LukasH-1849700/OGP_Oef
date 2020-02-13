#include "Date.h"
#include <iostream>
#include <string>

Date::Date(std::string s)
{
	using std::string;
	using std::stoi;

	string day_str = s.substr(0, 2);
	string month_str = s.substr(3, 2);
	string year_str = s.substr(6, 4);

	m_dag = stoi(day_str);
	m_maand = stoi(month_str);
	m_jaar = stoi(year_str);
}

int Date::getDag() const
{
	return m_dag;
}

int Date::getMaand() const
{
	return m_maand;
}

int Date::getJaar() const
{
	return m_jaar;
}

void Date::setDag(int dag)
{
	m_dag = dag;
}

void Date::setMaand(int maand)
{
	m_maand = maand;
}

void Date::setJaar(int jaar)
{
	m_jaar = jaar;
}
