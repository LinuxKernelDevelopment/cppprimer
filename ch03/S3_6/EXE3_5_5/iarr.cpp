#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> ivec = { 1, 2, 3, 4, 5};
	int a[5];
	for (int i = 0; i < ivec.size(); i++)
		a[i] = ivec[i];
	int *tmp;
	for (tmp = std::begin(a); tmp != std::end(a); tmp++)
		std::cout << *tmp << std::endl;
	return 0;
}
