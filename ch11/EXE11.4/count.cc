#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int main(void)
{
	unordered_map<string, size_t> word_count;
	set<string> punctuation = { ".", ",", "?", ";", ":", "-", "{",
				    "}", "(", ")", "\"",  "..."};
	string word;
	while (cin >> word) {
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
		if (punctuation.find(word) == punctuation.end()) {
			auto ret = word_count.insert({word, 1});
			if (!ret.second)
				++ret.first->second;
			//++word_count[word];
		}
	}
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second
		     << ((w.second > 1) ? " times" : " time") << endl;
	return 0;
}
