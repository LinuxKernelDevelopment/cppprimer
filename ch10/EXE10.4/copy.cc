#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> ivec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	/*auto ifrom (ivec.begin() + 6);
	auto ito (ivec.begin() + 2);
	reverse_iterator<int> from(ifrom);
	reverse_iterator<int> to(ito);*/
	list<int> ilst(8 - 3);
	copy(ivec.begin() + 3, 
	     ivec.begin() + 8, ilst.rbegin());

	for (auto tmp : ilst) {
		cout << tmp <<'\t';
	}
	cout << endl;
	return 0;
}
