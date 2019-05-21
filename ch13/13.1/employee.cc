#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	static int number;
	int ID;
	string name;

	Employee() : ID(number++) { }
	Employee(string name) : ID(number++), name(name) { }
	Employee(const Employee &orig) : ID(number++), name(orig.name) { }
};

int Employee::number = 0;

int main(void)
{
	Employee a("Tom"), b("Jack"), c("Paul");
	cout << a.name << '\t' << a.ID << endl;
	cout << b.name << '\t' << b.ID << endl;
	cout << c.name << '\t' << c.ID << endl;
	Employee d = a;
	cout << d.name << '\t' << d.ID << endl;
	return 0;
}
