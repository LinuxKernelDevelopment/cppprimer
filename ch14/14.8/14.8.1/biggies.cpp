#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string word,
				const string ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

class Less {
public:
	bool operator()(const string &a, const string &b)
	{ return a.size() < b.size(); }
};

class bigger {
public:
	bigger(vector<string>::size_type sz) : sz(sz) { }
	bool operator()(string &a)
	{ return a.size() > sz; }
private:
	vector<string>::size_type sz;
};

class out {
public:
	out(std::ostream &os = std::cout) : os(os) { }
	std::ostream& operator()(const string &s)
	{ os << s << " ";  return os;}
private:
	std::ostream &os;
};

void biggies(vector<string> &words,
		vector<string>::size_type sz)
{
	elimDups(words);

	bigger b(sz);
	Less l;
	stable_sort(words.begin(), words.end(),l);
	out o(std::cout);
	auto wc = find_if(words.begin(), words.end(), b);

	auto count = words.end() - wc;

	cout << count << " " << make_plural(count, "word", "s")
	     << " of length " << sz << " or longer" << endl;

	for_each(wc, words.end(), o);
	cout << endl;
}

int main(void)
{
	vector<string> svec = { "a", "tale", "of", "two", "cities" };
	biggies(svec, 3);
	return 0;
}

