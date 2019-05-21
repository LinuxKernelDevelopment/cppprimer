#include <iostream>
#include <vector>
#include "Foo.h"

int main(void)
{
	std::vector<int> ivec = { 5, 3, 2};
	Foo f(ivec);
	f.sorted();
	return 0;
}
