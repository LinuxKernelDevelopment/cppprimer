#include <iostream>
#include <list>
#include <deque>
using std::cin;
using std::cout;
using std::list;
using std::endl;
using std::deque;

int main(void)
{
	list<int> li = { 1, 2 ,3, 4};
	deque<int> even, odd;
	for (auto it : li) {
		if (it % 2)
			even.push_back(it);
		else
			odd.push_back(it);
	}
	
	cout << "even:";
	for (auto tmp : even) {
		cout << tmp << ", ";
	}
	cout << endl;
	cout << "odd:";
	for (auto tmp : odd) {
		cout << tmp << ", ";
	}
	cout << endl;
	return 0;
}

