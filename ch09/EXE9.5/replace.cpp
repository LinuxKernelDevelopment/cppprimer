#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void replace(string &s, string oldVal, string newVal)
{
	size_t pos = 0, ret = 0;
	while ((ret = s.find(oldVal, ret)) != string::npos) {
		s.erase(s.begin() + pos, s.begin() + pos + oldVal.length());
		s.insert(pos, newVal);
		ret++;
	}
}

int main(void)
{
	string s("tho");
	string oldVal("tho");
	string newVal("though");

	replace(s, oldVal, newVal);

	cout << s << endl;

	return 0;
}
