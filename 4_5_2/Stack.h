#pragma once
#include <vector>

template <typename T>
class Stack
{
public:
	Stack();
	~Stack();
	void print();

	void push(T c);
	T pop();

	bool is_empty();

private:
	int m_top{ -1 };
	std::vector<T> m_elems;

};
