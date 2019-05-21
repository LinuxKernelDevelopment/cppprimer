#include "Blob.h"
#include <iostream>

int main(void)
{
	Blob<int> squares = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (size_t i = 0; i != squares.size(); ++i)
		squares[i] = i * i;
	for (size_t i = 0; i != squares.size(); ++i)
		std::cout << squares[i] << std::endl;
	return 0;
}
