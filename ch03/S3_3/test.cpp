#include <iostream>
#include <vector>
using std::vector;
using std::string;

int main(void)
{
	//vector<string> v7{10};
	vector<string> v7{10, "hi"};
	for (auto tmp : v7) {
		std::cout << tmp << std::endl;
	}
	return 0;
}
