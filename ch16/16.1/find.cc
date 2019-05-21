#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <set>
#include "find.h"

int main(void)
{
	std::vector<int> ivec = {1, 2, 3, 4, 5};
	std::list<std::string> slst = { "fuck", "you", "Sherry" };
	std::set<unsigned int> iset = find(ivec, 3);
	for (auto tmp : iset) {
		std::cout << tmp << "\t";
	}
	iset = find(slst, "you");
	for (auto tmp : iset) {
		std::cout << tmp << "\t";
	}

	std::cout << "\n";
	return 0;
}

