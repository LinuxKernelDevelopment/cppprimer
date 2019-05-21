#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void)
{
	map<string, vector<string>> fmap;

	fmap.insert( pair<string, vector<string>>("Li", vector<string>()));

	fmap["Li"].push_back("Li yong");

	return 0;
}
