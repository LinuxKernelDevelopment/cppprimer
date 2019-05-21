#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
	vector<int> ivec = { 41, 42, 41, 42, 41, 42, 41, 42};

	for (auto &t : ivec) {
		if (t % 2)
			t = t * 2;
		else
			continue;
	}

	for (const auto t : ivec)
		cout << t << std::endl;
	
	return 0;
}

