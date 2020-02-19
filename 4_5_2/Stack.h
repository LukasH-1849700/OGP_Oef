#pragma once
#include <vector>

template <typename T>
class Stack
{
public:
	Stack(int size);
	~Stack();
	void print();

	void push(T c);
	T pop();

	bool is_empty();
	bool is_full();

private:
	int m_top{ -1 }, m_size;
	std::vector<T> m_elems;

};
