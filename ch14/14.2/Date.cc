#include <iostream>
#include "Date.h"

int main(void)
{
	Date birth(1989, 9, 10);
	Date today;
	std::cin >> today;
	std::cout << today << std::endl;

	std::cout << birth << std::endl;
	return 0;
}
