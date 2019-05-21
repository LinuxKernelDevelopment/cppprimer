#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::istringstream;
using std::cout;
using std::endl;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(void)
{
	string line, word;
	vector<PersonInfo> people;

	istringstream record;
	while (getline(cin, line)) {
		PersonInfo info;
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
		record.clear();
	}
	for (auto p : people) {
		cout << p.name;
		for (auto number : p.phones) {
			cout << '\t' << number;
		}
		cout << '\n';
	}
	return 0;
}
