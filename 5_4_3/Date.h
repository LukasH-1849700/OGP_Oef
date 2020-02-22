#pragma once
#include <string>

class Date
{
public:
	Date(int day, int month, int year);
	Date() = default;

	int get_day() const;
	int get_month() const;
	int get_year() const;

	void set_day(int day);
	void set_month(int month);
	void set_year(int year);

	std::string get_date();

private:
	int m_day, m_month, m_year;

};
