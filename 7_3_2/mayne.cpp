#include "Vector.h"

int main()
{
	Vector v{10};

	for (int i = 0; i < 10; ++i)
		v.place_at(i+6.9, i);

	v.print();

	return 0;
}