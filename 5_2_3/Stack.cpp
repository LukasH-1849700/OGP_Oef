#include "Stack.h"
#include <iostream>

Stack::Stack(int size) : m_size{ size }, m_elems{ new char[size] }
{
	std::cout << "constructing\n";
}

Stack::~Stack()
{
	delete[] m_elems;
	std::cout << "destructing\n";
}

Stack::Stack(const Stack& s) : m_size{ s.m_size }, m_elems{ new char[s.m_size] }, m_top{s.m_top}
{
	std::cout << "copying\n";
	strncpy(m_elems, s.m_elems, s.m_size);
}

Stack::Stack(Stack&& s) : m_size{ s.m_size }, m_elems{ s.m_elems }, m_top{ s.m_top }
{
	std::cout << "moving\n";
	s.m_size = 0;
	s.m_top = 0;
	s.m_elems = nullptr;
}


void Stack::print()
{
	for (int i = 0; i <= m_top; ++i)
		std::cout << m_elems[i];
	std::cout << '\n';
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
	return m_top == m_size - 1;
}
