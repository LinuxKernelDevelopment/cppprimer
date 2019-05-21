#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> vec = {2, 4, 6, 8, 10};

	auto pos = find_if(vec.begin(), vec.end(), std::bind(modulus<int>(), std::placeholders::_1, 3));
	if (pos == vec.end())
		cout << "All divisible" << endl;
	else
		cout << "Not" << endl;
	return 0;
}
