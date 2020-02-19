#include "Complex.h"
#include <iostream>

int main()
{
	Complex c1{};
	Complex c2{3, 9};
	Complex c3{ 7, 81 };

	std::cout << "Before changes: \n";
	c1.write_complex();
	c2.write_complex();
	c3.write_complex();

	c1.set_imaginary(69);
	c2.set_real(13);
	c3.add_complex(c2);

	std::cout << "After changes: \n";
	c1.write_complex();
	c2.write_complex();
	c3.write_complex();

	return 0;
}