#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::vector<int> vec;
	vec.reserve(10);
	std::fill_n(vec.begin(), 10, 0);
	return 0;
}

