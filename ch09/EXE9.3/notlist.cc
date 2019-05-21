#include <iostream>
#include <list>
using std::list;
using std::cout;
using std::endl;

int main(void)
{
	list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto begin = vi.begin();
	while (begin != vi.end()) {
		++begin;
		vi.insert(begin, 42);
		++begin;
	}
	for (auto tmp : vi)
		cout << tmp << '\t';
	cout << endl;
	return 0;
}
