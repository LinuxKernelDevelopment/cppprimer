#include <iostream>
#include <list>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::count;

int main(void)
{
	list<int> lvec = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 8,
	8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9};

	cout << count(lvec.begin(), lvec.end(), 8) << endl;

	return 0;
}

