#include <iostream>
#include "../Sales_item.h"

int main(void)
{
	Sales_item tmp;

	std::cin >> tmp;
	Sales_item sum = tmp;

	while (std::cin >> tmp) {
		sum += tmp;
	}
	std::cout << sum << std::endl;
	return 0;
}
