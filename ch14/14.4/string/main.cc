#include <iostream>
#include <vector>
#include "string.h"

int main(void)
{
	string haha("haha");
	string hehe("hahe");
	std::cout << (haha <= hehe) << std::endl;
	std::cout << haha << std::endl;
	std::vector<string> svec;
	svec.push_back(haha);
	return 0;
}
