#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	vector<int> iv = {1, 2, 3, 4};
	
	vector<int> iv2;

	cout << iv.at(2) << '\t' << *iv.begin() << '\t' << iv.front() << endl;
	cout << iv2.at(2) << '\t' << *iv2.begin() << '\t' << iv2.front() << endl;
	return 0;
}
