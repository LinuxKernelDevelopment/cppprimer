#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main(void)
{
	vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	list<int> Ins, fIns, bIns;

	copy(ivec.begin(), ivec.end(), inserter(Ins, Ins.end()));

	copy(ivec.begin(), ivec.end(), front_inserter(fIns));

	copy(ivec.begin(), ivec.end(), back_inserter(bIns));

	cout << "Ins:";
	for (auto tmp : Ins)
		cout << tmp << "\t";
	cout << endl;

	cout << "fIns:";
	for (auto tmp : fIns)
		cout << tmp << "\t";
	cout << endl;

	cout << "bIns:";
	for (auto tmp : bIns)
		cout << tmp << "\t";
	cout << endl;
	return 0;
}
