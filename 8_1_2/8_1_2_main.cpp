#include "Article.h"
#include "Game.h"
#include "Book.h"
#include "Comic.h"
#include "Shop.h"
#include <vector>

int main()
{
	Shop shoppe{};

	Game bg3{"Baldur's gate 3", 69.99, Game::type::PC, Game::rating::M};
	shoppe.add_item(&bg3);
	Book lovecraft{ "The Complete Fiction of H. P. Lovecraft", 11.03, 785834206 , {"H.P. Lovecraft"} };
	shoppe.add_item(&lovecraft);
	Comic spoderman{"Powerless", 2.99, 785139400 , {"Brian Michael Bendis", "Bill Jemas"}, "Ultimate Spider-Man", 1};
	shoppe.add_item(&spoderman);

	shoppe.print_stock();

	return 0;
}