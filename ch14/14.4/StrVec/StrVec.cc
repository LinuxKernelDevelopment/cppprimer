#include <iostream>
#include <string>
#include <initializer_list>
#include "StrVec.h"

int main(void)
{
	StrVec l = {"haha", "hehe"};
	StrVec r = {"haha", "hehe", "e"};
	
	std::cout << (r > l) << std::endl;
	return 0;

}
