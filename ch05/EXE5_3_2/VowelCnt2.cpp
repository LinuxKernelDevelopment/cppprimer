#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	string InString;

	cin >> InString;

	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
	for (auto ch : InString) {
		switch (ch) {
		case 'a':
		case 'A':
			aCnt++;
			break;
		case 'e':
		case 'E':
			eCnt++;
			break;
		case 'i':
		case 'I':
			iCnt++;
			break;
		case 'o':
		case 'O':
			oCnt++;
			break;
		case 'u':
		case 'U':
			uCnt++;
			break;
		default:
			++otherCnt;
			break;
		}
	}

	cout << "A(a):\t" << aCnt << endl;
	cout << "E(e):\t" << eCnt << endl;
	cout << "I(i):\t" << iCnt << endl;
	cout << "O(o):\t" << oCnt << endl;
	cout << "U(u):\t" << uCnt << endl;
	return 0;
}
