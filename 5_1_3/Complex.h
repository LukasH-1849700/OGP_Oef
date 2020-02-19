#pragma once
class Complex
{
public:
	Complex(int r, int i);
	Complex() = default;

	int get_real() const;
	int get_imaginary() const;
	void set_real(int r);
	void set_imaginary(int i);

	void write_complex();
	void add_complex(const Complex &c);

private:
	int m_real, m_imaginary;
};

