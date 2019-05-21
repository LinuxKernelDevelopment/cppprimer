#include <iostream>
#include <vector>
#include "string.h"

int main(void)
{
	string haha("haha");
	string hehe("hahe");
	hehe[1] = 'e';
	std::cout << (haha <= hehe) << std::endl;
	std::cout << hehe << std::endl;
	std::vector<string> svec;
	svec.push_back(haha);
	return 0;
}
