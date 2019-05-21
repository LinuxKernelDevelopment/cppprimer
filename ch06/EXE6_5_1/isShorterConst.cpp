#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

constexpr bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main(void)
{
	cout << isShorter("fuck", "you") << endl;
	return 0;
}
