#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string t1 = string(argv[1]);
	string t2 = string(argv[2]);
	cout << t1 + ' ' + t2 << endl;
	return 0;
}
