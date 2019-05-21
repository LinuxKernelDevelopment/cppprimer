#include <iostream>
#include <forward_list>
#include <string>
using std::forward_list;
using std::cout;
using std::endl;

int main(void)
{
	forward_list<int> flst = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (auto prev = flst.before_begin(), curr = flst.begin();
		curr != flst.end();
	    ) {
		if (*curr % 2)
			curr = flst.erase_after(prev);
		else {
			prev = curr;
			curr++;
		}
	}

	cout << "forward list:";
	for (auto tmp : flst) {
		cout << tmp << '\t';
	}
	cout << endl;
	return 0;
}
