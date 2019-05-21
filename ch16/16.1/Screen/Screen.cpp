#include "Screen.h"
#include <iostream>
using std::cout;

int main(void)
{
	Screen<5,5> myScreen('X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << '\n';
	cout << myScreen << std::endl;
	cout << '\n';
	return 0;
}
