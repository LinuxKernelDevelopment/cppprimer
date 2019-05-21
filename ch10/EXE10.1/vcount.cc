#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::count;

int main(void)
{
	vector<int> ivec = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 8,
	8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9};

	cout << count(ivec.begin(), ivec.end(), 8) << endl;

	return 0;
}

