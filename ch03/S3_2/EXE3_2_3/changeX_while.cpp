#include <iostream>

int main(void)
{
	std::string s("some string");
	decltype(s.size()) i = 0;
	while (i < s.size()) {
		s[i] = 'X';
		i++;
	}
	std::cout << s << std::endl;
	return 0;
}
