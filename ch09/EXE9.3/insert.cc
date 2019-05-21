#include <iostream>
#include <forward_list>
using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void InsertString(forward_list<string> &flst, string s1, string s2)
{
	for (auto curr = flst.begin();
		curr != flst.end();
	    ) {
		if (*curr == s1) {
			curr = flst.insert_after(curr, s2);
		} else {
			curr++;
		}
	}
}

int main(void)
{
	forward_list<string> flst = {"fuck", "you"};

	InsertString(flst, string("you"), string("many"));
	InsertString(flst, string("many"), string("times"));

	for (auto tmp : flst) {
		cout << tmp << ' ';
	}
	cout << endl;
	return 0;
}
