#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void)
{
	multimap<string, string> fmap;

	fmap.insert( pair<string, string>("Li", "LiYONG"));
	fmap.insert( pair<string, string>("Li", "Lisan"));

	
	//fmap["Li"].push_back("Li yong");

	return 0;
}
