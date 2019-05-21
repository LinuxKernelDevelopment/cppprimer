#include <iostream>

int main(void)
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	if (s1 == s2) {
		std::cout << s1 << " equal " << s2 << std::endl;
		return 0;
	} else if (s1 > s2) {
		std::cout << s1 << " larger than " << s2 << std::endl;
		return 0;
	} else {
		std::cout << s2 << " larger than " << s1 << std::endl;
		return 0;
	}
	return -1;
}
