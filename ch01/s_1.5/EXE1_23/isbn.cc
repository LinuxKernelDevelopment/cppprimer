#include <iostream>
#include "../Sales_item.h"

int main(void)
{
	Sales_item tmp;
	Sales_item prev;

	std::cin >> prev;
	int records = 1;
	while (std::cin >> tmp) {
		if (tmp.isbn() == prev.isbn()) {
			records++;
		}
		else {
			std::cout << prev << "\t" << records << std::endl;
			records = 1;
		}
		prev = tmp;
	}
	std::cout << prev << "\t" << records << std::endl;
	return 0;
}

