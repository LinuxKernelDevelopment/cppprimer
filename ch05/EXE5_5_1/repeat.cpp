#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
	string str, pstr;

	while (cin >> str) {
		if (pstr == str) {
			cout << str << " occurs twice" << endl;
			break;
		}
		pstr = str;
	}

	if (pstr != str)
		cout << "no word was repeated" << endl;
	return 0;
}
