#pragma once
#define STACK_SIZE 8

class Stack
{
public:
	Stack();
	~Stack();
	void print();

	void push(char c);
	char pop();

	bool is_empty();
	bool is_full();

private:
	int m_top{-1};
	char m_elems[STACK_SIZE];

};
