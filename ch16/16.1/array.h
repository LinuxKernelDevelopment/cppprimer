#ifndef ARRAY_H
#include <iostream>
#define ARRAY_H
template<class Ary>
void print(Ary array)
{
	for (auto it = array.begin(); it != array.end(); it++)
		std::cout << *it << '\t';
	std::cout << std::endl;
}
#endif
