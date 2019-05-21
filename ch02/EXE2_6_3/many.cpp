#include <iostream>
#include "header.h"

int main(void)
{
	Sales_data total;
	double price;

	if (std::cin >> total.bookNo >> total.units_sold >> price) {
		Sales_data trans;
		total.revenue = total.units_sold * price;
		while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue; 
			} else {
				std::cout << total.bookNo << '\t' << total.units_sold << '\t' << total.revenue <<
				std::endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}

		}
		std::cout << total.bookNo << '\t' << total.units_sold << '\t' << total.revenue << std::endl;
	} else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}
