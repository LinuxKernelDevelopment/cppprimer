#include <iostream>
#include <vector>
#include <string>
#include <locale>
using std::toupper;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void toupper(string &s)
{
	for (std::string::size_type i = 0; i < s.length(); ++i)
		s[i] = toupper(s[i]);
}

int main(void)
{
	vector<string> svec;
	string word;
	while (cin >> word)
		svec.push_back(word);

	for (auto &t : svec) {
		toupper(t);
	}

	for (auto t : svec) {
		std::cout << t << endl;
	}
	return 0;
}
