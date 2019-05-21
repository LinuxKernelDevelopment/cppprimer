#include <iostream>
#include <string>
#include <vector>

class ReadString {
public:
	ReadString(std::istream &i = std::cin) :
			is(i) { }
	std::string operator() (void)
	{
		std::string str;
		is >> str;
		if (is)
			return str;
		else
			return std::string();
	}

private:
	std::istream &is;
};

int main()
{
	ReadString readstr;
	std::string tmp = readstr();
	std::cout << tmp << std::endl;
	std::vector<std::string> svec;
	while (tmp != "") {
		svec.push_back(tmp);
		tmp = readstr();
	}
	return 0;
}
