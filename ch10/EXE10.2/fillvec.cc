#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::fill_n;

int main(void)
{
	vector<int> ivec(10, -1);

	fill_n(ivec.begin(), ivec.size(), 0);

	for (auto tmp : ivec) {
		cout << tmp;
	}
	cout << endl;
	return 0;
}
