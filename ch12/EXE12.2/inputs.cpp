#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main(void)
{
	string ins;
	while (cin >> ins) {
		unique_ptr<char []> up(new char[0]);
		for (size_t i = 0; i != ins.size(); i++)
			up[i] = ins[i];
		cout << up.get() << endl;
	}
	return 0;
}
