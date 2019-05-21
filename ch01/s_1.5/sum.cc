#include <iostream>
#include <set>
#include "Sales_item.h"
using namespace std;

int main()
{
	multiset<Sales_item, bool *(const Sales_item&, const Sales_item&)> bookstore(compareIsbn);
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
