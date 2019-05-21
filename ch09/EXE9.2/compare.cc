#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main(void)
{
	vector<int> v1 = { 1, 2, 3};
	vector<int> v2 = { 1, 2, 3};
	list<int> l1 = {1, 2 ,3};
	cout << (v1 == v2) << endl;
	cout << (l1 == v2) << endl;
	return 0;
}
