#include <iostream>

int main(void)
{
	std::string line;
	while (getline(std::cin, line))
		std::cout << line << std::endl;
	return 0;
}
