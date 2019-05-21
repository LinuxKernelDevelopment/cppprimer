#include <iostream>
#include <vector>
#include <memory>
using namespace std;

shared_ptr<vector<int>> AllocVector()
{
	shared_ptr<vector<int>> p = make_shared<vector<int>>();
	return p;
}

shared_ptr<vector<int>> GetInput(shared_ptr<vector<int>> p)
{
	int tmp;
	while (cin >> tmp)
		p->push_back(tmp);
	return p;
}

void PrintVector(shared_ptr<vector<int>> p)
{
	for (auto tmp : *p)
		cout << tmp << '\t';
	cout << endl;
}

int main(void)
{
	shared_ptr<vector<int>> p = AllocVector();

	p = GetInput(p);

	PrintVector(p);
	return 0;
}
