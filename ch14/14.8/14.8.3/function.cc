#include <iostream>
#include <functional>
#include <string>
#include <map>
using namespace std;

int main(int argc, char* argv[])
{
	function<int(int,int)> add = std::plus<int>();
	function<int(int,int)> sub = std::minus<int>();
	function<int(int,int)> mul = std::multiplies<int>();
	function<int(int,int)> div = std::divides<int>();
	function<int(int,int)> mod = std::modulus<int>();

	map<string, function<int(int, int)>> binops = {
		{"+", add},
		{"-", sub},
		{"*", mul},
		{"/", div},
		{"%", mod} };
	string expr(argv[1]);

	std::size_t pos = expr.find_first_of("+-*/%");
	if (pos == string::npos) {
		cout << "illeagel string" << endl;
		return -1;
	}

	string lhs = expr.substr(0, pos);
	string rhs = expr.substr(pos+1, expr.size() - (pos+1));
	int lv = atoi(lhs.c_str());
	int rv = atoi(rhs.c_str());
	cout << "result:" << binops[expr.substr(pos, 1)](lv, rv) << endl;
	return 0;
}
