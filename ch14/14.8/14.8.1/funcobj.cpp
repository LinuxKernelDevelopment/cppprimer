#include <iostream>

class funcobj {
public:
	funcobj(std::ostream &o = std::cout, char c = ' ') :
		os(o), sep(c) { }
	void operator()(int i, int j, int k)
	{  std::cout << (i ? j : k) << sep; }
private:
	std::ostream &os;
	char sep;
};

int main(void)
{
	funcobj func;
	func(1, 2, 3);
	return 0;
}
