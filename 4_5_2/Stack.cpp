#include "Stack.h"
#include <iostream>

template <typename T>
Stack<T>::Stack()
{
	std::cout << "constructing\n";
}

template <typename T>
Stack<T>::~Stack()
{
	m_elems.clear();
	std::cout << "destructing\n";
}


template <typename T>
void Stack<T>::print()
{
	for (const auto &e:m_elems)
		std::cout << e;
}


template <typename T>
void Stack<T>::push(T c)
{
	++m_top;
	m_elems.push_back(c);
}

template <typename T>
T Stack<T>::pop()
{
	T c{};

	if (!is_empty()) {
		c = m_elems.back();
		m_elems.pop_back();
		--m_top;
	}

	return c;
}


template <typename T>
bool Stack<T>::is_empty()
{
	return m_elems.empty();
}

template class Stack<char>;
