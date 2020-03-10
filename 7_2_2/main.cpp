#include <iostream>
class A
{
public:
	A() { std::cout << "Ctr[A]\n"; }
	~A() { std::cout << "Dtr[A]\n"; }
};
class B : public A
{
public:
	B() { std::cout << "Ctr[B]\n"; }
	~B() { std::cout << "Dtr[B]\n"; }
};
int main()
{
	A a{};
	B b{};
	return 0;
}
