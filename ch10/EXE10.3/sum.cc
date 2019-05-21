#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	auto f = [](int a, int b)
		   { return a + b; };

 	cout << f(11, 22) << endl;
	return 0;
}
