#include <iostream>
#include "../Sales_item.h"

int main(void)
{
	Sales_item item1, item2;
	std::cin >> item1;
	std::cin >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
