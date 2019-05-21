#include <memory>
#include <iostream>
#include "string.h"

string::string(const char *cp)
{
	std::cout << "string::string(const char *cp)" << std::endl;
	len = strlen(cp);
	cstring = alloc.allocate(len + 1);
	memcpy(cstring, cp , len + 1);
}

string::string(const string &str)
{
	std::cout << "string::string(const string &str)" << std::endl;
	auto cp = alloc.allocate(str.len + 1);
	free();
	memcpy(cp, str.cstring, str.len + 1);
	cstring = cp;
	len = str.len;
}

string &string::operator=(const string &rhs)
{
	std::cout << "string &string::operator=(const string &rhs)" << std::endl;
	auto cp = alloc.allocate(rhs.len + 1);
	free();
	memcpy(cp, rhs.cstring, rhs.len + 1);
	cstring = cp;
	len = rhs.len;
}

std::ostream& operator<<(std::ostream& out, const string& s)
{
	out << s.cstring;
	return out;
}

bool operator==(const string &lhs, const string &rhs)
{
	if (lhs.len != rhs.len)
		return false;
	for (int i = 0; i != lhs.len; i++) {
		if (lhs.cstring[i] != rhs.cstring[i])
			return false;
	}
	return true;
}


bool operator<(const string &lhs, const string &rhs)
{
	int len = lhs.len > rhs.len ? rhs.len : lhs.len;
	for (int i = 0; i != len; i++) {
		if (lhs.cstring[i] < rhs.cstring[i])
			return true;
	}
	if (lhs.len < rhs.len)
		return true;
	return false;
}

bool operator>(const string &lhs, const string &rhs)
{
	int len = lhs.len > rhs.len ? rhs.len : lhs.len;
	for (int i = 0; i != len; i++) {
		if (lhs.cstring[i] > rhs.cstring[i])
			return true;
	}
	if (lhs.len > rhs.len)
		return true;
	return false;
}

bool operator<=(const string &lhs, const string &rhs)
{
	return operator<(lhs, rhs) || operator==(lhs, rhs);
}

bool operator>=(const string &lhs, const string &rhs)
{
	return operator>(lhs, rhs) || operator==(lhs, rhs);
}

void string::free()
{
	alloc.destroy(cstring);
}
