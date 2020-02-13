#include "Date.h"
#include <iostream>

int main()
{
	Date d{};
	int day, month, year;
	std::cout << "give date (d m y):\n";
	std::cin >> day >> month >> year;
	d.setDag(day);
	d.setMaand(month);
	d.setJaar(year);

	std::cout << d.getDag() << "/"
			  << d.getMaand() << "/"
			  << d.getJaar() << "\n";

	return 0;
}