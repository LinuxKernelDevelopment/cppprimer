#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main(void)
{
	vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (auto riter = ivec.cend() - 1; riter != ivec.cbegin() - 1; riter--) {
		cout << *riter << '\t';
	}
	cout << endl;
	return 0;
}
