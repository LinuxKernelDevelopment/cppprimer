#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(void)
{
	vector<string> svec = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

	int sum = 0;

	for (auto str : svec) {
		sum += stoi(str);
	}

	cout << sum << endl;
	return 0;
}
