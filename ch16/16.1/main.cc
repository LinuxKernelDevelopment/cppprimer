#include "compare.h"
#include "Sales_item.h"
#include <iostream>


int main(void)
{
	Sales_item item1("123456"), item2("678910");
	std::cout << compare(3, 4) << std::endl;
//	compare(item1, item2);
	return 0;
}
