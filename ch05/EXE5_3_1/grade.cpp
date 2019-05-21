#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
	const vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
	int grade;
	std::string lettergrade = "";
	cin >> grade;
	if (grade >= 60) {
		lettergrade = scores[(grade - 50)/10];
		if (grade == 100)
			;
		else {
			if (grade % 10 > 7)
				lettergrade += '+';
			else if (grade % 10 < 3)
				lettergrade += '-';
		}
	} else
		lettergrade = scores[0];
	cout << lettergrade << endl;
	return 0;
}
