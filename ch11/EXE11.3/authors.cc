#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	multimap<string, string> authors;

	authors.insert({"Barth, John", "Sot-Weed Factor"});
	authors.insert({"Barth, John", "Lost in the Funhouse"});

	authors.insert({"Aarons, Leroy", "Prayers for Bobby"});

	authors.insert({"Abbott, Christmas", "The Badass Life"});
	authors.insert({"Abbott, Christmas", "The Badass Body Diet"});

	authors.insert({"Dickens, Charles", "The Frozen Deep"});
	authors.insert({"Dickens, Charles", "A Tale of Two Cities"});
	authors.insert({"Dickens, Charles", "No Thoroughfare"});

	/*for (auto pos = authors.equal_range("Dickens, Charles");
		pos.first != pos.second; ++pos.first){
		//cout << pos.first->second << endl;
		authors.erase(pos.first);
	}*/
	vector<string> svec;
	for (auto pos = authors.equal_range("Dickens, Charles");
		pos.first != pos.second; ++pos.first){
		svec.push_back(pos.first->second);
		//authors.erase(pos.first);
	}
	sort(svec.begin(), svec.end());
	for (auto str : svec)
		cout << str << endl;
	return 0;
}
