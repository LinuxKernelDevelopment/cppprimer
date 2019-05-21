#include <iostream>

struct Sales_data {
	std::string	bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

int main(void)
{
	Sales_data item1;
	Sales_data item2;
	double price;

	std::cout << "input item1:" << std::endl;
	std::cin >> item1.bookNo >> item1.units_sold >> price;
	std::cout << item1.bookNo << '\t' << item1.units_sold << '\t' << price << std::endl;

	item1.revenue = item1.units_sold * price;

	std::cout << "input item2:" << std::endl;
	std::cin >> item2.bookNo >> item2.units_sold >> price;
	std::cout << std::endl;

	std::cout << item2.bookNo << '\t' << item2.units_sold << '\t' << price << std::endl;

	item2.revenue = item2.units_sold * price;


	if (item1.bookNo == item2.bookNo) {
		std::cout << item1.bookNo << '\t' << item1.units_sold + item2.units_sold << '\t' << item1.revenue +
		item2.revenue << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to same ISBN"
			  << std::endl;
		return -1;
	}
}
