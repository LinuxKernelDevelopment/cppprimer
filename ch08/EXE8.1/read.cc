#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void print(std::istream &is = std::cin){
	string tmp;
	while (is >> tmp) {
		cout << tmp << endl;
	}
	is.clear();
}

int main(void)
{
	print();
	return 0;
}
