#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main(void)
{
	allocator<string> alloc;
	size_t n = 100;
	string *const p = alloc.allocate(n);
	string s;
	string *q = p;
	while (cin >> s && q != p + n)
		alloc.construct(q++, s);

	//const size_t size = q - p;

	while (q != p)
		alloc.destroy(--q);
	
	alloc.deallocate(p, n);
	return 0;
}
