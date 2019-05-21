#include <iostream>
#include <vector>

struct X {
	X() {std::cout << "X()" << std::endl;}
	X(const X&) {std::cout << "X(const X&)" << std::endl;}
	X& operator=(const X &rhs) {std::cout << "operator=(const X &rhs)" << std::endl; return *this; }
	~X() {std::cout << "~X()" << std::endl;}
};

void Pass(X rhs)
{
	std::cout << "Pass(X rhs) is called" << std::endl;
}

void pass(X &rhs)
{
	std::cout << "Pass(X &rhs) is called" << std::endl;
}

int main(void)
{
	X rhs;
	Pass(rhs);
	pass(rhs);
	std::vector<X> xvec;
	xvec.push_back(rhs);
	return 0;
}
	
