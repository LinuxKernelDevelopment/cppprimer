#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "StrBlob.h"
using namespace std;

int main(void)
{
	StrBlob sb = { "fuck", "you"};
	sb[1] = "Sherry";
	const StrBlob sb2 = { "holy", "shit"};
	std::cout << sb << std::endl;
	cout << (sb > sb2) << endl;
	cout << sb.front() << " " << sb.back() << endl;
	return 0;
}
