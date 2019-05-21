#include <iostream>
#include <list>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main(void)
{
	list<string> ds;
	string word;
	auto iter = ds.begin();
	while (cin >> word)
		iter = ds.insert(iter, word);
	
	for (auto tmp : ds)
		cout << tmp << '\t';
	cout << endl;
	return 0;
}
