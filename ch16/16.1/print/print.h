#include <iostream>

template<typename Container>
void print(Container con)
{
	for (typename Container::size_type i = 0; i != con.size(); i++) {
		std::cout << con[i] << '\t';
	}
	std::cout << std::endl;
}
