#include <iostream>
#include <string>
#include <map>
using std::map;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class YMD {
public:
	unsigned int year, month, day;
	YMD(string str) {
		map<string, int> monmap = {{"Jan", 1}, {"Feb", 2}, {"Mar", 3},
					   {"Apr", 4}, {"May", 5}, {"Jun", 6},
					   {"Jul", 7}, {"Aug", 8}, {"Sep", 9},
					   {"Oct", 10}, {"Nov", 11}, {"Dec", 12}};
		if (str.find("/") != string::npos) {
			month = stoi(str.substr(0, str.find("/")));
			str.erase(0, str.find("/") + 1);
			day = stoi(str.substr(0, str.find("/")));
			str.erase(0, str.find("/") + 1);
			year = stoi(str);
			return;
		} else if (str.find_first_of(string("JFMASOND")) != string::npos) {
			month = monmap[str.substr(0, 3)];
			str.erase(0, str.find(" ") + 1);
			day = stoi(str.substr(0, str.find(",")));
			str.erase(0, str.find(",") + 1);
			year = stoi(str);
		}
	}
};

int main(void)
{
	YMD ymd(string("1/1/1900"));
	YMD ymd1(string("January 1, 1900"));
	YMD ymd2(string("Jan 1, 1900"));
	cout << ymd1.year << '\t' << ymd1.month << '\t' << ymd1.day << endl;
	cout << ymd2.year << '\t' << ymd2.month << '\t' << ymd2.day << endl;
	return 0;
}
