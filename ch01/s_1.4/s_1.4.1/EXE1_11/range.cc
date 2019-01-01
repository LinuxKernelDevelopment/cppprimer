#include <iostream>

int main(void)
{
	int v1, v2;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> v1 >> v2;
	while (v1 <= v2) {
		std::cout << v1 << '\t';
		v1++;
	}
	std::cout << std::endl;
	return 0;
}
