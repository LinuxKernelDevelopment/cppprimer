#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char *a1 = "fuck";
	char *a2 = "you";

	if (strcmp(a1, a2) == 0) {
		cout << a1 << "=" << a2 << endl;
	} else if (strcmp(a1, a2) < 0) {
		cout << a1 << "<" << a2 << endl;
	} else {
		cout << a1 << ">" << a2 << endl;
	}
	return 0;
}
