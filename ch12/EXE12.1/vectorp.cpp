#include <iostream>
#include <vector>
using namespace std;

vector<int>* AllocVector()
{
	vector<int> *p = new vector<int>;
	return p;
}

vector<int>* GetInput(vector<int> *p)
{
	int tmp;
	while (cin >> tmp)
		p->push_back(tmp);
	return p;
}

void PrintVector(vector<int> *p)
{
	for (auto tmp : *p)
		cout << tmp << '\t';
	cout << endl;
	delete p;
}

int main(void)
{
	vector<int> *p = AllocVector();

	p = GetInput(p);

	PrintVector(p);
	return 0;
}
