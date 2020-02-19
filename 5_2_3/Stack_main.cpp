#include "Stack.h"

Stack foo_stack()
{
	Stack s{ 5 };

	s.push('f');
	s.push('o');
	s.push('o');

	return s;
}

int main()
{
	Stack s{5};

	s.push('y');

	Stack ss{ s };
	Stack sss{foo_stack()};

	s.print();
	ss.print();
	sss.print();

	return 0;
}
