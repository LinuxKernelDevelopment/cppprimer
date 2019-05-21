#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(vector<int> &ivec, string s)
{
	if (ivec[0] > s.size())
		return true;
	else
		return false;
}

int main(int argc, char *argv[])
{
	vector<int> ivec = {10, 10, 10, 10, 10};

	auto check = bind(check_size, _1, "fuck");

	if (check(ivec))
		cout << "true" << endl;
	else
		cout << "flase" << endl;
	return 0;
}
