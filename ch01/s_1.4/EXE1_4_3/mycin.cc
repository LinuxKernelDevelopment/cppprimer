#include <iostream>

int main()
{
	int sum = 0;
	int v1;
	while (std::cin >> v1) {
		sum += v1;
	}
	std::cout << "Sum: " << sum <<std::endl;
	return 0;
}
