#pragma once
class Complex
{
public:
	Complex(int r, int i);
	Complex() = default;

	int get_real();
	int get_imaginary();
	void set_real(int r);
	void set_imaginary(int i);

	void write_complex();
	void add_complex(Complex c);

private:
	int m_real, m_imaginary;
};

