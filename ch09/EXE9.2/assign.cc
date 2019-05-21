#include <iostream>
#include <list>
#include <vector>
#include <string>
using std::list;
using std::vector;
using std::string;

int main(void)
{
	list<char *> lcp = { "fuck", "you" };
	vector<string> vs;
	vs.assign(lcp.cbegin(), lcp.cend());
	return 0;
}
