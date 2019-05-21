#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 10, b = 11;
	cout << a << '\t' << b << endl;
	swap(&a, &b);
	cout << a << '\t' << b << endl;
	return 0;
}
