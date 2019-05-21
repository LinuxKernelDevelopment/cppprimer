#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int larger(int a, int *b)
{
	return a > *b ? a : *b;
}

int main(void)
{
	int a = 10, b = 11;
	cout << larger(a , &b) << endl;
	return 0;
}
