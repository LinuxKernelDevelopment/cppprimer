#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::vector;
using std::ifstream;

int main(int argc, char *argv[])
{
	ifstream ifs(argv[1]);
	vector<Sales_data> svec;
	Sales_data item;
	while(read(ifs, item)) {
		svec.push_back(item);
	}
	sort(svec.begin(), svec.end(), compareIsbn);

	for (auto tmp : svec) {
		print(cout, tmp);
		cout << endl;
	}
	return 0;
}
