#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main(void)
{
	pair<string, int> tmp;
	vector<pair<string, int>> pvec;

	while (cin >> tmp.first >> tmp.second)
		pvec.push_back(tmp);

	for (auto tmp : pvec) {
		cout << tmp.first << "\t" << tmp.second << "\n";
	}
	return 0;
}
