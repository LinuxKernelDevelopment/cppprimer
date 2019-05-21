#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using std::cin;
using std::cout;
using std::vector;
using std::accumulate;
using std::endl;

int main(void)
{
	vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = accumulate(ivec.cbegin(), ivec.cend(), 0);

	cout << sum << endl;
	return 0;
}
