#pragma once

class Stack
{
public:
	Stack(int size);
	~Stack();
	void print();

	void push(char c);
	char pop();

	bool is_empty();
	bool is_full();

private:
	int m_top{ -1 }, m_size;
	char *m_elems;

};
