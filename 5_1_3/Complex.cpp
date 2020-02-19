#include "Complex.h"
#include <iostream>

Complex::Complex(int r, int i) : m_real{r}, m_imaginary{i}
{
	// constructor for complex number
}


int Complex::get_real() const
{
	return m_real;
}

int Complex::get_imaginary() const
{
	return m_imaginary;
}

void Complex::set_real(int r)
{
	m_real = r;
}

void Complex::set_imaginary(int i)
{
	m_imaginary = i;
}


void Complex::write_complex()
{
	std::cout << m_real << " + " << m_imaginary << "*i\n";
}

void Complex::add_complex(const Complex &c)
{
	m_real += c.get_real();
	m_imaginary += c.get_imaginary();
}
