#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::fill_n;

void dump(vector<int> &ivec)
{
	for (auto tmp : ivec) {
		cout << tmp << "\t";
	}
	cout << endl;
}

void elimDumps(vector<int> &ivec)
{
	dump(ivec);
	sort(ivec.begin(), ivec.end());

	dump(ivec);
	auto end_unique = unique(ivec.begin(), ivec.end());

	dump(ivec);
	ivec.erase(end_unique, ivec.end());
	dump(ivec);
}

int main(void)
{
	vector<int> ivec = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 8,
	8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9};

	dump(ivec);
	elimDumps(ivec);
	return 0;
}
