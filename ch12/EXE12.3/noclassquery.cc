#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <sstream>
#include <istream>
#include <fstream>
#include <map>
using namespace std;

size_t Query(vector<string> svec, string s, map<string, set<size_t>> &WordMap)
{
	string word;
	size_t LineNum = 0;
	for (auto line : svec) {
		LineNum += 1;
		istringstream sline(line);
		while (sline >> word) {
			if (word == s)
				WordMap[s].insert(LineNum);
		}
	}
	return WordMap[s].size();
}

void GetStringVector(vector<string> &svec, string FileName)
{
	string line;
	ifstream InFile(FileName);
	while (getline(InFile, line)) {
		cout << line << endl;
		svec.push_back(line);
	}
}

int main(int argc, char *argv[])
{
	string FileName = argv[1];
	vector<string> svec;

	GetStringVector(svec, FileName);

	map<string, set<size_t>> WordMap;

	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;

		if (!(cin >> s) || s == "q") break;

		cout << s << " occurs " << Query(svec, s, WordMap) << " times" <<endl;

		for (auto index : WordMap[s]) {
			cout << "\t" << svec[index-1] << endl;
		}
	}
	return 0;
}



