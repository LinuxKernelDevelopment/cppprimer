#include <iostream>

int main(void)
{
	std::string punctuation;
	std::cin >> punctuation;
	decltype(punctuation.size()) i = 0;
	for (i = 0; i < punctuation.size(); i++) {
		if (punctuation[i] == ',') {
			punctuation.erase(i, 1);
		}
	}
	std::cout << punctuation << std::endl;
	return 0;
}
