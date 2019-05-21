#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void print_int(vector<int> arg)
{
	for (auto it = arg.begin(); it != arg.end(); ++it)
		cout << *it << '\t';
	cout << endl;
}

void print_string(vector<string> arg)
{
	for (auto it = arg.begin(); it != arg.end(); ++it)
		cout << *it << '\t';
	cout << endl;
}

int main(void)
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1:\n";
	print_int(v1);

	cout << "v2:\n";
	print_int(v2);

	cout << "v3:\n";
	print_int(v3);

	cout << "v4:\n";
	print_int(v4);

	cout << "v5:\n";
	print_int(v5);

	cout << "v6:\n";
	print_string(v6);

	cout << "v7:\n";
	print_string(v7);

	return 0;
}
