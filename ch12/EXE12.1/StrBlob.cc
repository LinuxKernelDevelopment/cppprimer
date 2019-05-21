#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "StrBlobPtr.h"
using namespace std;

int main(void)
{
	const StrBlob sb = { "fuck", "you"};
	cout << sb.front() << " " << sb.back() << endl;
	return 0;
}
