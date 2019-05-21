#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std::placeholders;
using std::cout;
using std::vector;
using std::string;
using std::endl;

string make_plural(size_t ctr, const string &word,
			       const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	words.erase(end_unique, words.end());
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies(vector<string> &words,
	     vector<string>::size_type sz)
{
	elimDups(words);

	stable_sort(words.begin(), words.end(),
		    [](const string &a, const string &b)
		    	{ return a.size() < b.size();});

	auto wc = stable_partition(words.begin(), words.end(),
			    bind(check_size, _1, 6));

	auto count = wc - words.begin();
	cout << count << " " << make_plural(count, "word", "s")
	     << " of length " << sz << " or longer" << endl;

	for_each(words.begin(), wc,
		[](const string &s) {cout << s << " ";});
	cout << endl;
}

int main(void)
{
	vector<string> svec = { "a", "tale", "of", "two", "cities" };
	biggies(svec, 3);
	return 0;
}
