#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;
using std::sort;
using std::vector;
using std::copy;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	istream_iterator<int> in(cin), eof;
	ostream_iterator<int> out(cout, " ");

	vector<int> vec(in, eof);
	sort(vec.begin(), vec.end());
	copy(vec.begin(), vec.end(), out);
	cout << endl;

	return 0;
}
