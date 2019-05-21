#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::endl;

int main(void)
{
	vector<int> ivec;
	int tmp;

	while (cin >> tmp)
		ivec.push_back(tmp);

	for (auto itb = ivec.begin(), ite = ivec.end() - 1; itb <= ite; itb++,ite--) {
		cout << *itb + *ite << endl;
	}
	return 0;
}
