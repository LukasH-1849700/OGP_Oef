#include "Game.h"

Game::Game(const std::string& n, const double& p, const type& t, const rating& r) : Article{ n, p }, m_type{t}, m_rating{r}
{}

Game::type Game::get_type() const
{
	return m_type;
}
Game::rating Game::get_rating() const
{
	return m_rating;
}

void Game::set_type(const type& type)
{
	m_type = type;
}
void Game::set_rating(const rating& rating)
{
	m_rating = rating;
}
