#pragma once
#include "Article.h"
#include <string>

class Game : public Article
{
public:
	enum class type {PC, PS4, XBONE};
	enum class rating { E, E10p, T, M, AO, RP };

	Game(const std::string& n, const double& p, const type& t, const rating& r);
	void print() const override;
	type get_type() const;
	rating get_rating() const;
	std::string get_type_str() const;
	std::string get_rating_str() const;

	void set_type(const type& type);
	void set_rating(const rating& rating);

private:
	type m_type;
	rating m_rating;

};

