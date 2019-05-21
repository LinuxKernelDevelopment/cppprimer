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
	int n;
	cout << "Please input a number:" << endl;
	cin >> n;
	int ret = fact(n);
	cout << ret << endl;
	return 0;
}
