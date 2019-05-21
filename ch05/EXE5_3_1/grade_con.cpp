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
	grade >= 60 ? lettergrade = scores[(grade - 50)/10] : lettergrade = scores[0];
	(grade % 10 <= 7) ?"a": lettergrade += '+' ;
	(grade % 10 >= 3) ?"a" : lettergrade += '-' ;
	(grade != 100) ?"a": lettergrade = lettergrade.substr(0, lettergrade.size()-1);
	cout << lettergrade << endl;
	return 0;
}
