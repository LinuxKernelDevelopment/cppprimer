#include <memory>
#include <string>
using namespace std;

int main(void)
{
	unique_ptr<string> p1(new string("ABCDEFG"));
	return 0;
}
