#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;

vector<int>::iterator range(vector<int> &vi, int num)
{
	for (auto it = vi.begin(); it != vi.end(); it++) {
		if (*it == num)
			return it;
	}
	return vi.end();
}

int main(void)
{
	vector<int> vi = {1, 2, 3, 4, 5};
	cout << *range(vi, 6) << endl;
	return 0;
}
