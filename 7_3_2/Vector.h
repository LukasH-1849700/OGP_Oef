#pragma once
class Vector
{
public:
	Vector(const int& size);
	void place_at(const double& d, const int& pos);
	double get_at(const int& pos) const;

	void print() const;

private:
	double* m_vector;
	int m_size;

};

