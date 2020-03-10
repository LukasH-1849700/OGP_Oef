#pragma once
#include "Article.h"
#include <string>
#include <vector>

class Book : public Article
{
public:
	Book(const std::string& n, const double& p, const int& isbn, const std::vector<std::string>& authors);

	int get_isbn() const;
	std::vector<std::string> get_authors() const;

	void set_isbn(const int& isbn);
	void set_authors(const std::vector<std::string>& authors);

private:
	int m_isbn;
	std::vector<std::string> m_authors;

};

