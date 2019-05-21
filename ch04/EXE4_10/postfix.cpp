#include <iostream>
#include <vector>
using std::vector;

int main(void)
{
	vector<int> ivec(10, 0);
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0;
			ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
	for (auto t : ivec) {
		std::cout << t << '\t';
	}
	std::cout << std::endl;
	return 0;
}
