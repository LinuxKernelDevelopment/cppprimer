#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vec = {1, 1025, 1, 1025, 1033};
	vector<string> svec = {"haha", "hehe", "pooh", "haha"};
	cout << count_if(vec.begin(), vec.end(), std::bind(greater<int>(), std::placeholders::_1, 1024)) << endl;
	auto pos = find_if(svec.begin(), svec.end(), std::bind(equal_to<string>(), std::placeholders::_1, "pooh"));
	cout << (distance(svec.begin(), pos) + 1) << endl;
	transform(vec.begin(), vec.end(), vec.begin(), std::bind(multiplies<int>(), std::placeholders::_1, 2));
	for (auto tmp : vec)
		cout << tmp << ' ';
	cout << endl;
	return 0;
}
