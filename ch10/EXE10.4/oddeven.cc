#include <iostream>
#include <iterator>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	ofstream out1(argv[2]);
	ofstream out2(argv[3]);
	istream_iterator<int> Itin(in), eof;
	ostream_iterator<int> Itout1(out1, "\n");
	ostream_iterator<int> Itout2(out2, "\n");
	
	while (Itin != eof) {
		int tmp = *Itin++;
		if (tmp % 2)
			Itout1 = tmp;
		else
			Itout2 = tmp;
	}
	return 0;
}

