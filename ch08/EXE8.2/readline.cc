#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::ifstream;
using std::cout;
using std::string;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
	vector<string> sv;
	ifstream input(argv[1]);
	string str;
	while (getline(input, str)) {
		sv.push_back(str);
	}
	for (auto tmp : sv)
		cout << tmp << endl;
}
