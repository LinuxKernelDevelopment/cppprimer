#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cerr;

void VectorPrint(vector<int> iv)
{
#ifndef	NDEBUG
	cerr << "size:" << iv.size() << endl;
#endif
	if (iv.size() == 0)
		return;
	cout << iv[0] << endl;
	iv.erase(iv.begin());
	VectorPrint(iv);
}

int main(void)
{
	vector<int> iv = {1, 2, 3, 4, 5};
	VectorPrint(iv);
	return 0;
}
