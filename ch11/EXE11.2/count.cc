#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(void)
{
	map<string, size_t> word_count;
	set<string> punctuation = { ".", ",", "?", ";", ":", "-", "{",
				    "}", "(", ")", "\"",  "..."};
	vector<string> pvec = { ".", ",", "?", ";", ":", "-", "{",
				    "}", "(", ")", "\"",  "..."};
	string word;
	while (cin >> word) {
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
		if (find(pvec.begin(), pvec.end(), word) == pvec.end())
			++word_count[word];
	}
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second
		     << ((w.second > 1) ? " times" : " time") << endl;
	return 0;
}
