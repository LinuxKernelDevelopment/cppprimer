#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
		ret *= i;
	return ret;
}

int main(void)
{
	int ret = fact(6);
	cout << ret << endl;
	return 0;
}
