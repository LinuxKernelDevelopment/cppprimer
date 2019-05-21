#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

typedef struct {
	string::size_type occurs;
	string::size_type index;
} ans;

ans find_char(const string &s, char c)
{
	ans ret;
	ret.index = s.size();
	ret.occurs = 0;
	for (string::size_type i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret.index == s.size())
				ret.index = i;
			++ret.occurs;
		}
	}
	return ret;
}

int main(void)
{
	const string s = "hahahaha";
	ans ret = find_char(s, 'a');
	cout << ret.index << '\t' << ret.occurs << endl;
	return 0;
}

