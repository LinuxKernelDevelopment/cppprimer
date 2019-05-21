#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	int v1;
	while (std::cin >> v1) {
		sum += v1;
	}
	cout << "Sum: " << sum <<endl;
	return 0;
}
