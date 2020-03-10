#pragma once
#include <string>

class Article
{
public:
	Article(const std::string &name, const double &price);
	virtual void print() const;
	std::string get_name() const;
	double get_price() const;

	void set_price(const double &price);

private:
	std::string m_name;
	double m_price;

};

