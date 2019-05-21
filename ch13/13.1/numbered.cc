#include <iostream>
using namespace std;

int glo = 0;
class numbered {
public:
	int mysn;
	numbered() { mysn = glo; glo++;}
	numbered(const numbered &orig) {
		mysn = glo;
		glo++;
	}
};

void f(numbered &s)
{
	cout << s.mysn << endl;
}

int main(void)
{
	numbered a, b = a, c =b;
	f(a); f(b); f(c);
	return 0;
}
