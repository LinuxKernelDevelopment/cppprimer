#include <iostream>
using std::cin;

int main(void)
{
	unsigned int a, b, c, d;
	std::cout << "Input a, b, c, d" << std::endl;
	cin >> a >> b >> c >> d;
	if (a > b && b > c && c >d)
		std::cout << "right" << std::endl;
	else
		std::cout << "wrong" << std::endl;
	return 0;
}
