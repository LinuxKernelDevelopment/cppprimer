#include <iostream>

int main(void)
{
	int arr[] = {-1, -1, -1, -1, -1, -1, -1, -1};

	for (int *p = std::begin(arr); p != std::end(arr); p++)
		*p = 0;
	return 0;
}
