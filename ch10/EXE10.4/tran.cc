#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "Sales_item.h"
using namespace std;

int main(int argc, char *argv[])
{
	ifstream input(argv[1]);	
	istream_iterator<Sales_item> item_iter(input), eof;
	vector<Sales_item> vec(item_iter, eof);
	sort(vec.begin(), vec.end(), compareIsbn);
	auto iter = vec.begin();
	while (iter != vec.end()) {
		auto acc_end = find_if_not(iter, vec.end(), [&](Sales_item item){return iter->isbn() == item.isbn();});
		cout << accumulate(iter, acc_end, Sales_item()) << endl;
		iter = acc_end;
	}

	return 0;
}
