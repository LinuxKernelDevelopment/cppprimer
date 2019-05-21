#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void f()
{
	cout << "void" << endl;
}

void f(int a)
{
	cout << "int" << endl;
}

void f(int a, int b)
{
	cout << "int int" << endl;
}

void f(double a, double b)
{
	cout << "double double" << endl;
}

int main(void)
{
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}
