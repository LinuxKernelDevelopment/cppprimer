#ifndef FIND_H
#define FIND_H
#include <set>

template <class T, typename U>
std::set<unsigned int> find(T vec, U key)
{
	std::set<unsigned int> iset;

	/*for (unsigned int i = 0; i <= vec.size(); i++) {
		
		if (vec[i] == key)
			iset.insert(i);
	}*/
	unsigned int i = 0;
	for (auto tmp : vec) {
		i++;
		if (tmp == key) {
			iset.insert(i);
		}
	}
	return iset;
}
#endif
