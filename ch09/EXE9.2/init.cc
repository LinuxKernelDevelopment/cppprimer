#include <iostream>
#include <vector>
#include <list>
using std::list;
using std::vector;

int main(void)
{
	list<int> iv = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	list<int> dv(iv);
	return 0;
}

