#include <iostream>
#include <vector>
using std::begin;
using std::end;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5};
	int brr[] = { 1, 2, 7, 4, 5};
	std::vector<int> v1 = {1, 2, 3, 4, 5};
	std::vector<int> v2 = {1, 2, 7, 4, 5};
	int *ap = begin(arr);
	int *bp = begin(brr);
	bool equal = true;
	for (; ap != end(arr) && bp != end(brr); ap++,bp++) {
		if (*ap != *bp) {
			equal = false;
			break;
		}
	}
	if (ap != end(arr) || bp != end(brr))
		equal = false;
	if (equal) 
		std::cout << "Array equal" << std::endl;
	else
		std::cout << "Array not equal" << std::endl;

	if (v1 == v2)
		std::cout << "Vector equal" << std::endl;
	else
		std::cout << "Vector not equal" << std::endl;
	return 0;
}
