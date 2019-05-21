#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	unsigned int Point;
	std::string Grade;
	cout << "Please input Point:" << endl;
	cin >> Point;
	if (Point > 75)
		Grade = "high pass";
	else if (Point > 60)
		Grade = "pass";
	else
		Grade = "fail";
	cout << Grade << endl;
	return 0;
}
