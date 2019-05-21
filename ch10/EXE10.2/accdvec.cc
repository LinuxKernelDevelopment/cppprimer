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
	vector<double> ivec = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
	double sum = accumulate(ivec.cbegin(), ivec.cend(), 0.0);

	cout << sum << endl;
	return 0;
}
