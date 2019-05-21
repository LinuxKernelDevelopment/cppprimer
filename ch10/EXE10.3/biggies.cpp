#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::for_each;

void biggers(vector<string> &words,
		vector<string>::size_type sz)
{
	for_each(words.begin(), words.end(),
		[sz](const string &s) { cout << ((s.size() < sz) ? "" : s + string("\t")); });
	cout << endl;
}

int main(void)
{
	vector<string> words = { "fuck", "you", "luffy", "Roronoa"};
	biggers(words, 4);
	return 0;
}
