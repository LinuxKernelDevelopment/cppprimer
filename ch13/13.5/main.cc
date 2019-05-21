#include <iostream>
#include <sstream>
#include <fstream>
#include <memory>
#include <set>
#include <string>
#include <vector>
#include <map>
using namespace std;
#include "TextQuery.h"
#include "QueryResult.h"

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	
	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

int main(int argc, char *argv[])
{
	ifstream infile(argv[1]);
	runQueries(infile);
	return 0;
}
