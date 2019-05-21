#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
struct Sales_data {
	string	bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

int main(void)
{
	double price;

	Sales_data total, tmp;
	if (!(cin >> total.bookNo >> total.units_sold >> price)) {
		cerr << "No data ?!" << endl;
		return -1;
	}
	total.revenue = total.units_sold * price;
	while (cin >> tmp.bookNo >> tmp.units_sold >> price) {
		tmp.revenue = tmp.units_sold * price;
		if (total.bookNo == tmp.bookNo) {
			total.units_sold += tmp.units_sold;
			total.revenue += tmp.revenue;
		} else {
			break;
		}

	}
	cout << total.bookNo << '\t' << total.units_sold << '\t' << total.revenue << endl;
	return 0;
}
