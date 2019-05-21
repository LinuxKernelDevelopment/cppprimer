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
	sort(ivec.begin(), ivec.end());

	auto end_unique = unique(ivec.begin(), ivec.end());

	ivec.erase(end_unique, ivec.end());
}

bool isShorter(const int v1, const int v2)
{
	return v1 > v2;
}

int main(void)
{
	vector<int> ivec = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 8,
	8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9};

	elimDumps(ivec);
	sort(ivec.begin(), ivec.end(), isShorter);
	dump(ivec);
	return 0;
}
