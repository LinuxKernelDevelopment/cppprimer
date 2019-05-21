#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::partition;

bool bigger(string &str)
{
	return str.size() > 5;
}

int main(void)
{
	vector<string> svec = { "a", "bb", "ccc", "dddd", "eeeeee", "fffffff", "gggggggg", "hhhhhhhhh", "iiiiiiiiii"};

	partition(svec.begin(), svec.end(), bigger);

	for (auto tmp : svec) {
		cout << tmp << '\t';
	}
	cout << endl;
	return 0;
}
	
