#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void)
{
	int a = 1, b = 2;
	cout << a << '\t' << b << endl;
	swap(&a, &b);
	cout << a << '\t' << b << endl;
	return 0;
}
