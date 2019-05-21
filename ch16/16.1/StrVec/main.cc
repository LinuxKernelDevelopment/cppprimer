#include "StrVec.h"
#include <string>
#include <iostream>

int main(void)
{
	Vec<std::string> svec;
	std::string str = "fuck";
	svec.push_back(str);
	std::cout << *svec.begin() << std::endl;
	return 0;
}
