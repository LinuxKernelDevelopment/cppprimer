#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
using namespace std;

int main(void)
{
	pair<string, string> pbir;
	vector<decltype(pbir)> bvec;
	while (cin >> pbir.first >> pbir.second)
		bvec.push_back(pbir);
	
	for (auto btmp : bvec) {
		cout << btmp.first << '\t' << btmp.second << endl;
	}
	return 0;

}
