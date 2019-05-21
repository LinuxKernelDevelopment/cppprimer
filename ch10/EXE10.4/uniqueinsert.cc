#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using std::front_inserter;
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main(void)
{
	vector<int> ivec = {1, 2, 3, 4};
	list<int> lst;

	unique_copy(ivec.begin(), ivec.end(), front_inserter(lst));

	for (auto tmp : lst)
		cout << tmp;
	cout << endl;
	return 0;
}
