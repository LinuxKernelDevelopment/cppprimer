#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int abs(int val)
{
	val = val > 0 ? val : -val;
	return val;
}

int main(void)
{
	cout << abs(-5) << '\t' << abs(5) << endl;
	return 0;
}
