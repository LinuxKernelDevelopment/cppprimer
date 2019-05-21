#include <iostream>
using std::cin;

int main(void)
{
	int tmp;
	while (cin >> tmp) {
		if (tmp == 42)
			break;
	}
	return 0;
}
