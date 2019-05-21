#include <iostream>
#include <string>
#include <fstream>

class Strlen {
public:
	Strlen(size_t min, size_t max) : min(min), max(max) { }

	bool operator()(std::string str)
	{ return str.size() > min && str.size() < max; }
private:
	size_t min, max;
};

int main(int argc, char *argv[])
{
	std::ifstream file(argv[1]);

	std::string word;
	size_t cnt = 0;
	Strlen sl(1, 10);
	while (file >> word)
	{
		if (sl(word))
			cnt++;
	}
	std::cout << cnt << std::endl;
	return 0;
}
