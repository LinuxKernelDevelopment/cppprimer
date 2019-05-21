#include <iostream>
#include <sstream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

std::istream& print(std::istream &is = std::cin){
	string tmp;
	while (is >> tmp) {
		cout << tmp << endl;
	}
	is.clear();
	return is;
}

int main(void)
{
	std::istringstream ss("a b c");
	print(ss);
	return 0;
}
