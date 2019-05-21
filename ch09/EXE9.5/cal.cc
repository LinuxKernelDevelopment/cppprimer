#include <iostream>
#include <stack>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::stack;

int cal(string expr)
{
	stack<char> arg;
	stack<char> op;
	for (auto ch : expr) {
		switch (op) {
		case '+':
		case '-':
		case '*':
		case '/':
			op.push(ch);
			break;
		case 
