#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	unsigned int Point;
	std::string Grade;
	cout << "Please input Point:" << endl;
	cin >> Point;
	Grade = Point > 75 ? "high pass" : Point > 60 ? "pass" : "fail";
	cout << Grade << endl;
	return 0;
}
