#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(void)
{
	vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (auto it = ivec.begin();
		it != ivec.end(); ++it)
		*it = *it * 2;

	for (auto tmp : ivec)
		cout << tmp << '\t';

	cout << endl;
	return 0;
}
