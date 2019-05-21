#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main(void)
{
	list<int> ilst = {0, 1, 0, 1, 0, 1, 0, 1};

	auto it = find(ilst.rbegin(), ilst.rend(), 0);

	cout << "index:" << distance(begin(ilst), it.base()) - 1 << endl;

	return 0;
}
