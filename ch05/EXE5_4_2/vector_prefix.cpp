#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::endl;

int main(int argc, char *argv[])
{
	vector<int> v1 = { 0, 1, 1, 2};
	vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8};
	auto v1p = v1.begin();
	auto v2p = v2.begin();
	for (;
		v1p != v1.end() && v2p != v2.end();
		v1p++, v2p++)
	{
		if (*v1p != *v2p)
			break;
	}
	if (v1p != v1.end() && v2p != v2.end()) {
		cout << "they are not prefix relationship" << endl;
	} else if (v1p == v1.end()) {
		cout << "v1 is v2 prefix" << endl;
	} else {
		cout << "v2 is v1 prefix" << endl;
	}
	return 0;
}
