#include <iostream>
#include <forward_list>
using std::forward_list;
using std::cout;
using std::endl;

int main(void)
{
	forward_list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto prev = vi.before_begin();
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert_after(iter, *iter);
			prev = iter;
			iter = std::next(iter);
		} else {
			iter = vi.erase_after(prev);
		}
	}

	for (auto tmp : vi)
		cout << tmp << '\t';
	cout << endl;
	return 0;
}
