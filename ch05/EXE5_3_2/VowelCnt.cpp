#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	string InString;

	cin >> InString;

	int vowelCnt = 0;
	for (auto ch : InString) {
		switch (ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			++vowelCnt;
			break;
		}
	}

	cout << vowelCnt << endl;
	return 0;
}
