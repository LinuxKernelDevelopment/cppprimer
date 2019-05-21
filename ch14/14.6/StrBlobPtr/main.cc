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
	int i = 1;
	while (i++ != strb.size()) {
		strbp = strbp + 1;
		std::cout << strbp.deref() << std::endl;
	}
	return 0;
}
