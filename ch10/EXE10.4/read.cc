#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::ifstream;
using std::istream_iterator;

int main(int argc, char *argv[])
{
	vector<string> vec;
	ifstream in(argv[1]);
	istream_iterator<string> in_iter(in);
	istream_iterator<string> eof;
	while (in_iter != eof)
		vec.push_back(*in_iter++);

	for (auto tmp : vec)
		cout << tmp <<'\t';
	return 0;
}
