#include <iostream>
#include <string>
#include <fstream>

class Strlen {
public:
	Strlen(size_t low, size_t high, size_t over) : low(low), high(high), over(over) { }

	bool operator()(std::string str)
	{ return (str.size() > low && str.size() < high) || (str.size() > over); }
private:
	size_t low, high, over;
};

int main(int argc, char *argv[])
{
	std::ifstream file(argv[1]);

	std::string word;
	size_t cnt = 0;
	Strlen sl(1, 9, 10);
	while (file >> word)
	{
		if (sl(word))
			cnt++;
	}
	std::cout << cnt << std::endl;
	return 0;
}
