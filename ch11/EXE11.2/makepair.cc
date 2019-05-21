#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main(void)
{
	string sin;
	int iin;
	vector<pair<string, int>> pvec;

	while (cin >> sin >> iin)
		pvec.push_back(make_pair(sin, iin));

	for (auto tmp : pvec) {
		cout << tmp.first << "\t" << tmp.second << "\n";
	}
	return 0;
}
