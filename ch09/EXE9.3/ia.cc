#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main(void)
{
	int ia[] = { 0, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> va;
	list<int> la;

	for (auto tmp : ia) {
		va.push_back(tmp);
		la.push_back(tmp);
	}

	for (auto it = la.begin(); it != la.end();) {
		if (*it % 2)
			it = la.erase(it);
		else
			it++;
	}

	auto it = la.end();
	it = la.erase(it, it);

	cout << "vector:";
	for (auto tmp : va) {
		cout << tmp << '\t';
	}
	cout << endl;

	cout << "list:";
	for (auto tmp : la) {
		cout << tmp << '\t';
	}
	cout << endl;
}


