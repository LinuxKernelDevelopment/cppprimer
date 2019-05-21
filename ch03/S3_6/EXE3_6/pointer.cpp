#include <iostream>

int main(void)
{
	int ia[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}};

	using int_array = int[4];

	for (int_array *tmp = ia; tmp != ia + 3; tmp++) {
		for (int *p = *tmp; p != *tmp + 4; p++) {
			std::cout << *p << '\t';
		}
		std::cout << '\n';
	}
	return 0;
}
