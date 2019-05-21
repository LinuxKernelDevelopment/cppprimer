#include <iostream>
#include <algorithm>
#include <vector>
#include "HasPtr.h"
using namespace std;

int main(void)
{
	HasPtr a("fuck");
	HasPtr b("you");
	vector<HasPtr> hv;
	hv.push_back(a);
	hv.push_back(b);
	sort(hv.begin(), hv.end());
	return 0;
}
