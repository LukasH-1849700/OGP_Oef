#include "Date.h"
#include <string>

Date::Date(int day, int month, int year) : m_day{ day }, m_month{ month }, m_year{ year }
{
	// Constructor yeets the date when building instead of after being built
}

int Date::get_day() const
{
	return m_day;
}

int Date::get_month() const
{
	return m_month;
}

int Date::get_year() const
{
	return m_year;
}

void Date::set_day(int day)
{
	m_day = day;
}

void Date::set_month(int month)
{
	m_month = month;
}

void Date::set_year(int year)
{
	m_year = year;
}

std::string Date::get_date()
{
	std::string s;
	s += std::to_string(m_day);
	s += '/';
	s += std::to_string(m_month);
	s += '/';
	s += std::to_string(m_year);
	return s;
}
