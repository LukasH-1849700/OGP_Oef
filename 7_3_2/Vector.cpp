#include "Vector.h"
#include <iostream>

Vector::Vector(const int& size) : m_size{ size }, m_vector{new double[size]}
{}

void Vector::place_at(const double& d, const int& pos)
{
	if (pos >= 0 && pos < m_size) m_vector[pos] = d;
}

double Vector::get_at(const int& pos) const
{
	if (pos >= 0 && pos < m_size) return m_vector[pos];
}

void Vector::print() const
{
	for (int i = 0; i < m_size - 1; ++i)
		std::cout << m_vector[i] << ", ";
	std::cout << m_vector[m_size-1];
}
