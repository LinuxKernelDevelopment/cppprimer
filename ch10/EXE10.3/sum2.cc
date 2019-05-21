#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int c = 33, d = 44;
	auto f = [c, d](int a)
		   { return a + c + d; };

 	cout << f(11) << endl;
	return 0;
}
