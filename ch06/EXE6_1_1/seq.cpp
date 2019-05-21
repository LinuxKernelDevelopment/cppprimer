#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int seq(void)
{
	static int cnt = 0;
	return cnt++;
}

int main(void)
{
	for (int i = 0; i !=10; i++)
		cout << seq() << endl;
	return 0;
}

