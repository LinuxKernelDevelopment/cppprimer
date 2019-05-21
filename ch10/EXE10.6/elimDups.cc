#include <iostream>
#include <list>
using namespace std;

void elimDups(list<int> &ilst)
{
	ilst.sort();

	ilst.unique();
}

int main(void)
{
	list<int> ilst = { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

	elimDups(ilst);

	for (auto tmp : ilst) {
		cout << tmp << '\t';
	}
	cout << endl;
	return 0;
}
