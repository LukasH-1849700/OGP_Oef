class Stack
{
public:
	Stack(int size);
	Stack(const Stack &s); //copy
	Stack(Stack &&s); //move
	~Stack();
	void print();

	void push(char c);
	char pop();

	bool is_empty();
	bool is_full();

private:
	int m_top{ -1 }, m_size;
	char* m_elems;

};
