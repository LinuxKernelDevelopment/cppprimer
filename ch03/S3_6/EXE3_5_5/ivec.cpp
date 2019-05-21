#include <iostream>
#include <vector>

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	std::vector<int> ivec(std::begin(arr), std::end(arr));
	for (auto tmp : ivec) {
		std::cout << tmp << std::endl;
	}
	return 0;
}
