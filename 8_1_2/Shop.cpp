#include "Shop.h"
#include "Article.h"
//#include <vector>

Article* Shop::get_item(int pos) const
{
	return m_stock[pos];
}

void Shop::add_item(Article* a)
{
	m_stock.push_back(a);
}

void Shop::remove_item(Article* a)
{
	int i = 0;
	bool done = false;
	while (!done && i < (int) m_stock.size())
		if (m_stock[i] == a) {
			m_stock.erase(m_stock.begin()+i);
			done = true;
		}
}

void Shop::print_stock() const
{
	for (Article* const& a : m_stock)
		a->print();
}
