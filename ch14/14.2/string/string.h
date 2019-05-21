#include <string.h>

class string {
public:
	string() : cstring(nullptr), len(0) { }
	string(const char *cp);
	string(const string &str);
	std::allocator<char> alloc;
	string &operator=(const string &rhs);
	friend std::ostream& operator<<(std::ostream&, const string&);
	void free();
	
private:
	char *cstring;
	int len;
};

