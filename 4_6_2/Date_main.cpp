#include "Date.h"
#include <iostream>

int main()
{
	std::string s{ "21/12/2012" };
	Date d{ s };

	std::cout << d.getDag() << "-"
			  << d.getMaand() << "-"
			  << d.getJaar() << "\n";

	return 0;
}
