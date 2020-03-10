#include "Article.h"
#include "Game.h"
#include "Book.h"
#include "Comic.h"
#include <vector>

int main()
{
	std::vector<Article> cart{};

	Game bg3{"Baldur's gate 3", 69.99, Game::type::PC, Game::rating::M};
	cart.push_back(bg3);
	Book lovecraft{ "The Complete Fiction of H. P. Lovecraft", 11.03, 785834206 , {"H.P. Lovecraft"} };
	cart.push_back(lovecraft);
	Comic spoderman{"Powerless", 2.99, 785139400 , {"Brian Michael Bendis", "Bill Jemas"}, "Ultimate Spider-Man", 1};
	cart.push_back(spoderman);

	return 0;
}