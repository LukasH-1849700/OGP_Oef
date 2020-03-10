#pragma once
#include "Book.h"
#include <string>

class Comic : public Book
{
public:
	Comic(const std::string& n, const double& p, const int& isbn, const std::vector<std::string>& authors, 
		  const std::string& series_name, const int& series_number);

	std::string get_series_name() const;
	int get_series_number() const;

	void set_series_name(const std::string& series_name);
	void set_series_number(const int& series_number);

private:
	std::string m_series_name;
	int m_series_number;

};

