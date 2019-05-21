#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(void)
{
	int val1 = 10;
	int val2 = 0;

	auto f = [&val1]()->bool
		{if (val1 == 0) return true; else {while(val1 != 0) val1--;} return false;};
	auto g = [&val2]()->bool
		{if (val2 == 0) return true; else {while(val2 != 0) val2--;} return false;};
	cout << f() << endl;
	cout << g() << endl;
	return 0;
}
