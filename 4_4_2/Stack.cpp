#include "Stack.h"
#include <iostream>

Stack::Stack()
{
	std::cout << "constructing\n";
}

Stack::~Stack()
{
	std::cout << "destructing\n";
}


void Stack::print()
{
	for (int i = 0; i <=m_top; ++i)
		std::cout << m_elems[i];
}


void Stack::push(char c)
{
	if (!is_full()) {
		++m_top;
		m_elems[m_top] = c;
	}
}

char Stack::pop()
{
	char c = '\0';

	if (!is_empty()) {
		c = m_elems[m_top];
		--m_top;
	}

	return c;
}


bool Stack::is_empty()
{
	return m_top == -1;
}

bool Stack::is_full()
{
	return m_top == STACK_SIZE-1;
}
