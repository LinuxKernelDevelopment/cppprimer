#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
	string preword, word, lword;
	int num = 1, largest = 0;
	while (cin >> word) {
		if (preword == word) {
			num++;
		} else {
			if (num >= largest) {
				largest = num;
				lword = preword;
			}
			num = 1;
			preword = word;
		}
	}
	cout << lword << '\t' << largest << endl;
	return 0;
}

