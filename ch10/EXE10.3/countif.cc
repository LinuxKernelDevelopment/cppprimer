#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::count_if;

int main(void)
{
	vector<string> svec = { "It", "was", "the", "best", "of", "times", "it", "was", "worst", "of", "times", "it",
	"was", "the", "age", "of", "wisdom"};
	cout << count_if(svec.begin(), svec.end(),
			 [](string s)
			 { return s.size() > 6;}) << endl;
	return 0;
}
