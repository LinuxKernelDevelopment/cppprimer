#include <iostream>
#include <fstream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;

int main(int argc, char *argv[])
{
	ifstream ifs(argv[1]);
	ofstream ofs(argv[2]);
	Sales_data total;
	if (read(ifs, total)) {
			Sales_data trans(ifs);
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(ofs, total) << endl;
				total = trans;
			}
		print(ofs, total) << endl;
	} else {
		cerr << "No data?!" << endl;
	}
	return 0;
}
