#include <iostream>

int main(void)
{
	int i = 42;
	const int &r1 = i;
	std::cout << r1 << std::endl;
	double dval = 3.14;
	const int &ri = dval;
	return 0;
}
