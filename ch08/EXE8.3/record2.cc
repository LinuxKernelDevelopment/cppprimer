#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
using std::string;
using std::vector;
using std::cin;
using std::istringstream;
using std::cout;
using std::endl;
using std::ifstream;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(int argc, char *argv[])
{
	string line, word;
	vector<PersonInfo> people;

	ifstream ifs(argv[1]);
	istringstream record;
	while (getline(ifs, line)) {
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
