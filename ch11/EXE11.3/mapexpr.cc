#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	map<int, int> imap;
	*inserter(imap, imap.end()) = {1, 2};

	for (auto tmp : imap) {
		cout << tmp.first << '\t' << tmp.second << endl;
	}
	return 0;
}
