#include "Game.h"
#include <string>
#include <iostream>

Game::Game(const std::string& n, const double& p, const type& t, const rating& r) : Article{ n, p }, m_type{t}, m_rating{r}
{}

void Game::print() const
{
	Article::print();
	std::cout << "Type: " << get_type_str()
			  << "\nRating: " << get_rating_str()
			  << '\n';
}

Game::type Game::get_type() const
{
	return m_type;
}
Game::rating Game::get_rating() const
{
	return m_rating;
}

std::string Game::get_type_str() const
{
	switch (m_type) {
	case type::PC:
		return "PC";
		break;
	case type::PS4:
		return "PS4";
		break;
	case type::XBONE:
		return "XBONE";
		break;
	}
}
std::string Game::get_rating_str() const
{
	switch (m_rating) {
	case rating::E:
		return "E";
		break;
	case rating::E10p:
		return "E 10+";
		break;
	case rating::T:
		return "T";
		break;
	case rating::M:
		return "M";
		break;
	case rating::AO:
		return "AO";
		break;
	case rating::RP:
		return "RP";
		break;
	}
}

void Game::set_type(const type& type)
{
	m_type = type;
}
void Game::set_rating(const rating& rating)
{
	m_rating = rating;
}
