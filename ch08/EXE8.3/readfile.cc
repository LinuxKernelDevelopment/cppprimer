#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
using std::cin;
using std::vector;
using std::string;
using std::fstream;
using std::istringstream;
using std::cout;
using std::endl;

void words(string filename, vector<string> &wv)
{
	fstream fs(filename);
	string line;
	string words;
	while (getline(fs, line)) {
		istringstream record(line);
		while (record >> words)
			wv.push_back(words);
	}
}

int main(int argc, char *argv[])
{
	vector<string> wv;

	words(argv[1], wv);

	for (auto tmp : wv)
		cout << tmp << endl;
	return 0;
}

