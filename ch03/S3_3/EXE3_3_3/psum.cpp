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
	
	for (int i = 0,j = ivec.size() - 1; i <= j; i++, j--) {
		cout << ivec[i] + ivec[j] << endl;
	}
	return 0;
}
