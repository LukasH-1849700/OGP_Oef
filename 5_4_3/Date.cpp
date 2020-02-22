#include "Date.h"

Date::Date(int day, int month, int year) : m_dag{ day }, m_maand{ month }, m_jaar{ year }
{
	// Constructor yeets the date when building instead of after being built
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
