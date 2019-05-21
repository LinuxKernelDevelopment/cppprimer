#include <iostream>
#include "Date.h"

int main(void)
{
	Date birth(1989, 9, 10);
	Date epoch(1970, 1, 1);
	Date today;
	std::cin >> today;
	std::cout << (birth < today) << std::endl;
	std::cout << today << std::endl;
	if (epoch)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << birth << std::endl;
	return 0;
}
