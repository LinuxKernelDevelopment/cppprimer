#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print(int a)
{
	cout << a << endl;
}

/*void print(int a[2])
{
	for (int i = 0; i != 2; i++) {
		cout << a[i] << endl;
	}
}*/

void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i) 
		cout << ia[i] << endl;
}

int main(void)
{
	int i = 0, j[2] = {0, 1};
	int ia[10] = {1, 1, 1 ,1 , 2, 3};
	print(i);
//	print(j);
	print(ia);
	return 0;
}
