#include "Book.h"
#include <string>
#include <iostream>
#include <vector>

Book::Book(const std::string& n, const double& p, const int& isbn, const std::vector<std::string>& authors)
	: Article{ n, p }, m_isbn{isbn}, m_authors{authors}
{}

void Book::print() const
{
	Article::print();
	std::cout << "Authors: /";
	for (auto& a : m_authors)
		std::cout << a << '/';
	std::cout << "\nISBN: " << m_isbn
			  << '\n';
}

int Book::get_isbn() const
{
	return m_isbn;
}
std::vector<std::string> Book::get_authors() const
{
	return m_authors;
}

void Book::set_isbn(const int& isbn)
{
	m_isbn = isbn;
}
void Book::set_authors(const std::vector<std::string>& authors)
{
	m_authors = authors;
}
