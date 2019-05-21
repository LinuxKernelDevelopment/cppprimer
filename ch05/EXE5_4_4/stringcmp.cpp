#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string str1, str2, rsp;
	do {
		cout << "please enter two strings: ";
		cin >> str1 >> str2;
		if (str1 > str2) {
			cout << str1 << " > " << str2 << endl;
		} else if (str1 < str2) {
			cout << str1 << " < " << str2 << endl;
		} else
			cout << str1 << " = " << str2 << endl;

		cout << "More? Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');
	return 0;
}
