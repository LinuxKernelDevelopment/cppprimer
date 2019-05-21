#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;

bool range(vector<int> &vi, int num)
{
	for (auto it = vi.begin(); it != vi.end(); it++) {
		if (*it == num)
			return true;
	}
	return false;
}

int main(void)
{
	vector<int> vi = {1, 2, 3, 4, 5};
	cout << range(vi, 6) << endl;
	return 0;
}
