#include <iostream>

template<typename Container>
void print(Container con)
{
	for (auto iter = con.begin(); iter != con.end(); iter++) {
		std::cout << *iter << '\t';
	}
	std::cout << '\n';
}
