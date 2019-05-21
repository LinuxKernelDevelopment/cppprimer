#include <iostream>

int main(void)
{
	std::string s("some string");
	for (auto &x : s) {
		x = 'X';
	}
	std::cout << s << std::endl;
	return 0;
}
