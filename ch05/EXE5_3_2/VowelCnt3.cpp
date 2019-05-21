#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::noskipws;

int main(void)
{
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0, space = 0, tab = 0, newline = 0;
	int ff = 0, fi = 0, fl = 0;
	int state = 0;
	#define	INIT	0
	#define	INF	1
	while (cin >> noskipws >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			state = INIT;
			aCnt++;
			break;
		case 'e':
		case 'E':
			state = INIT;
			eCnt++;
			break;
		case 'i':
			if (state == INF) {
				fi++;
				state = INIT;
			}
		case 'I':
			iCnt++;
			break;
		case 'o':
		case 'O':
			state = INIT;
			oCnt++;
			break;
		case 'u':
		case 'U':
			state = INIT;
			uCnt++;
			break;
		case ' ':
			state = INIT;
			space++;
			break;
		case '\t':
			state = INIT;
			tab++;
			break;
		case '\n':
			state = INIT;
			newline++;
			break;
		case 'f':
			if (state == INF) {
				ff++;
				state = INIT;
			} else if (state == INIT)
				state = INF;
			break;
		case 'l':
			if (state == INF) {
				fl++;
			} else
				state = INIT;
			break;

		default:
			state = INIT;
			++otherCnt;
			break;
		}
	}
	cout << "A(a):\t" << aCnt << endl;
	cout << "E(e):\t" << eCnt << endl;
	cout << "I(i):\t" << iCnt << endl;
	cout << "O(o):\t" << oCnt << endl;
	cout << "U(u):\t" << uCnt << endl;
	cout << "space:\t" << space << endl;
	cout << "newline:\t" << newline << endl;
	cout << "tab:\t" << tab << endl;
	cout << "ff:\t" << ff << endl;
	cout << "fl:\t" << fl << endl;
	cout << "fi:\t" << fi << endl;
	return 0;
}
