#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::endl;

int main(void) {
	int tmp;
	vector<int> ivec;
	while (cin >> tmp) {
		ivec.push_back(tmp);
	}
	for (auto f : ivec) {
		std::cout << f << endl;
	}
	return 0;
}
