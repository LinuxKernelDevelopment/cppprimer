#include <iostream>
#include "../Sales_item.h"

int main(void)
{
	Sales_item tmp;
	while (std::cin >> tmp) {
		std::cout << tmp << std::endl;
	}
	return 0;
}
