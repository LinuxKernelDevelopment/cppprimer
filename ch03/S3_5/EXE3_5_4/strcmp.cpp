#include <iostream>
#include <cstring>

int main(void)
{
	std::string a1("fuck");
	std::string a2("you");

	if (a1 < a2) {
		std::cout << a1 << "<" << a2 << std::endl;
	} else if (a1 == a2) {
		std::cout << a1 << "=" << a2 << std::endl;
	} else {
		std::cout << a1 << ">" << a2 << std::endl;
	}
	return 0;
}
