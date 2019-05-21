#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

typedef int (*Func)(int, int);

int Add(int i, int j)
{
	return i + j;
}

int Sub(int i, int j)
{
	return i - j;
}

int Mul(int i, int j)
{
	return i * j;
}

int Div(int i, int j)
{
	return i / j;
}

int main(void)
{
	vector<Func> Fv = {Add, Sub, Mul, Div};

	for (auto tmp : Fv) {
		cout << tmp(4, 2) << endl;
	}
	return 0;
}
