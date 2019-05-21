#include <string.h>

class string {
	friend bool operator==(const string&, const string&);
	friend bool operator<(const string&, const string&);
	friend bool operator>(const string&, const string&);
	friend bool operator<=(const string&, const string&);
	friend bool operator>=(const string&, const string&);
	friend std::ostream& operator<<(std::ostream&, const string&);
public:
	string() : cstring(nullptr), len(0) { }
	string(const char *cp);
	string(const string &str);
	std::allocator<char> alloc;
	string &operator=(const string &rhs);
	void free();
	char& operator[](std::size_t n)
		{ return cstring[n]; }
	const char& operator[](std::size_t n) const
		{ return cstring[n]; }
	
private:
	char *cstring;
	int len;
};
