#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> il)
{
	int sum = 0;
	for (auto beg = il.begin(); beg != il.end(); ++beg)
		sum += *beg;
	return sum;
}

int main(void)
{
	cout << sum({1, 2, 3, 4, 5}) << endl;
	return 0;
}
