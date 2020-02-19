#include "Stack.h"
#include <iostream>

template <typename T>
Stack<T>::Stack(int size) : m_size{ size }, m_elems{std::vector<T> elems (size)}
{
	std::cout << "constructing\n";
}

template <typename T>
Stack<T>::~Stack()
{
	delete[] m_elems;
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
	if (!is_full()) {
		++m_top;
		m_elems.push_back(c);
	}
}

template <typename T>
T Stack<T>::pop()
{
	if (!is_empty()) {
		T c = m_elems.pop_back();
		--m_top;
		return c;
	}
	else
		return nullptr;
}


template <typename T>
bool Stack<T>::is_empty()
{
	return m_top == -1;
}

template <typename T>
bool Stack<T>::is_full()
{
	return m_top == m_size - 1;
}
