#include <iostream>

struct Sales_data {
	std::string	bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

int main(void)
{
	double price;

	Sales_data total, tmp;
	if (!(std::cin >> total.bookNo >> total.units_sold >> price)) {
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
	total.revenue = total.units_sold * price;
	while (std::cin >> tmp.bookNo >> tmp.units_sold >> price) {
		tmp.revenue = tmp.units_sold * price;
		if (total.bookNo == tmp.bookNo) {
			total.units_sold += tmp.units_sold;
			total.revenue += tmp.revenue;
		} else {
			break;
		}

	}
	std::cout << total.bookNo << '\t' << total.units_sold << '\t' << total.revenue << std::endl;
	return 0;
}
