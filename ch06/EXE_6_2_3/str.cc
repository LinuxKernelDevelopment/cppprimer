#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool AllLow(const string &str)
{
	for (auto tmp : str) {
		if (isupper(tmp))
			return false;
	}
	return true;
}

void ChangeLow(string &str)
{
	for (auto &tmp : str) {
		tmp = tolower(tmp);
	}
}

int main(void)
{
	string tmp = "HaHa";
	cout << AllLow(tmp) << endl;
	ChangeLow(tmp);
	cout << tmp << endl;
	return 0;
}
