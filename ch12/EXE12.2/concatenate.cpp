#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main(void)
{
	string s1 = "fuck ";
	string s2 = "you";

	unique_ptr<char []> up(new char(s1.size() + s2.size()));

	size_t i;
	for (i = 0; i != s1.size(); i++)
		up[i] = s1[i];
	for (size_t j = 0; j != s2.size(); j++)
		up[i + j] = s2[j];

	cout << up.get() << endl;
	return 0;
}
