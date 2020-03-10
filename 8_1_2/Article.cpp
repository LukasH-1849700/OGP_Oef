#include "Article.h"
#include <string>
#include <iostream>

Article::Article(const std::string& name, const double& price) : m_name{name}, m_price{price}
{}

void Article::print() const
{
	std::cout << "\nName: " << m_name 
			  << "\nPrice: " << m_price
			  << '\n';
}

std::string Article::get_name() const
{
	return m_name;
}
double Article::get_price() const
{
	return m_price;
}

void Article::set_price(const double& price)
{
	m_price = price;
}
