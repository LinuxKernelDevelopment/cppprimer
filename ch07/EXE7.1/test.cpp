#include <iostream>
#include "Sales_item.h"

int main(void)
{
	std::cout << "item" << std::endl;
	Sales_data item{"0-201-78345-X", 3, 20.00};
	std::cout << "item2" << std::endl;
	Sales_data item2("9-999-99999-9");
	std::cout << "tem" << std::endl;
	item.combine(std::cin);
	return 0;
}
