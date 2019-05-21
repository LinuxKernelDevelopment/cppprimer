#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

int main(void)
{
	vector<string> svec = {"vi", "insert", "commands"};
	cout << count_if(svec.begin(), svec.end(), bind(check_size, _1, 6)) << endl;;
	return 0;
}

