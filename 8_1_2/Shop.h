#pragma once
#include <vector>
class Article;

class Shop
{
public:
	Article* get_item(int pos) const;
	void add_item(Article* a);
	void remove_item(Article* a);
	void print_stock() const;

private:
	std::vector<Article*> m_stock;

};

