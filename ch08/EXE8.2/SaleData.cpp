#include <iostream>
#include <fstream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;

int main(int argc, char *argv[])
{
	ifstream ifs(argv[1]);
	Sales_data total;
	if (read(ifs, total)) {
			Sales_data trans(ifs);
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		print(cout, total) << endl;
	} else {
		cerr << "No data?!" << endl;
	}
	return 0;
}
