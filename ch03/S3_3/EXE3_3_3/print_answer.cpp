#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cout;
using std::endl;
using std::string;

void print_int(vector<int> arg)
{
	for (auto tmp : arg) {
		cout << tmp << '\t';
	}
	cout << '\n';
}

void print_string(vector<string> arg)
{
	for (auto tmp : arg) {
		cout << tmp << '\t';
	}
	cout << '\n';
}

int main(void)
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1:" << endl;
	print_int(v1);

	cout << "v2:" << endl;
	print_int(v2);

	cout << "v3:" << endl;
	print_int(v3);

	cout << "v4:" << endl;
	print_int(v4);

	cout << "v5:" << endl;
	print_int(v5);

	cout << "v6:" << endl;
	print_string(v6);

	cout << "v7:" << endl;
	print_string(v7);

	return 0;
}
