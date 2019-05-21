#include <iostream>
#include <fstream>
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main(int argc, char *argv[])
{
	std::string line;
	StrBlob strb;
	std::ifstream infile(argv[1]);
	while (getline(infile, line)) {
		const std::string tmp = line;
		strb.push_back(tmp);
	}
	StrBlobPtr strbp(strb, 0);
	std::cout << strbp[0] << std::endl;
	std::cout << strbp[1] << std::endl;
	std::cout << strbp[2] << std::endl;
	return 0;
}
