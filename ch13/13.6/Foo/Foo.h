#include <vector>
#include <algorithm>
#include <iostream>

class Foo {
public:
	Foo(std::vector<int> cv);
	Foo sorted() &&;
	Foo sorted() const &;
private:
	std::vector<int> data;
};

Foo::Foo(std::vector<int> cv)
{
	data = cv;
}

Foo Foo::sorted() &&
{
	std::cout << "Foo Foo::sorted() &&" << std::endl;
	std::sort(data.begin(), data.end());
	return *this;
}

/*Foo Foo::sorted() const & {
	std::cout << "Foo Foo::sorted() const &" << std::endl;
	return Foo(*this).sorted();
}*/

Foo Foo::sorted() const & {
	Foo ret(*this);
	return ret.sorted();
}
