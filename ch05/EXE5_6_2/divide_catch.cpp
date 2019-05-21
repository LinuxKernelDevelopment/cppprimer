#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(void)
{
	int a, b, c;
	cout << "Please input two number:" << endl;
	cin >> a >> b;
	try {
		c = a / b;
	} catch (std::exception &e) {
		cerr << "ERROR:" << endl;
		cerr << e.what();
	}
	return 0;
}
