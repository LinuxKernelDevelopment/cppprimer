#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

struct Sales_data {
	string	bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

int main(void)
{
	Sales_data item1;
	Sales_data item2;
	double price;

	cout << "input item1:" << endl;
	cin >> item1.bookNo >> item1.units_sold >> price;
	cout << item1.bookNo << '\t' << item1.units_sold << '\t' << price << endl;

	item1.revenue = item1.units_sold * price;

	cout << "input item2:" << endl;
	cin >> item2.bookNo >> item2.units_sold >> price;
	cout << endl;

	cout << item2.bookNo << '\t' << item2.units_sold << '\t' << price << endl;

	item2.revenue = item2.units_sold * price;


	if (item1.bookNo == item2.bookNo) {
		cout << item1.bookNo << '\t' << item1.units_sold + item2.units_sold << '\t' << item1.revenue +
		item2.revenue << endl;
		return 0;
	} else {
		cerr << "Data must refer to same ISBN"
			  << endl;
		return -1;
	}
}
