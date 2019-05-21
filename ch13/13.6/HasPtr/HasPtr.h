class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	bool operator<(const HasPtr&);
	HasPtr(const std::string &s = std::string()) :
		ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
	HasPtr(const HasPtr &p) :
		ps(p.ps), i(p.i), use(p.use) { ++*use; }
	HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i) {p.ps = 0;}
	//HasPtr& operator=(HasPtr &&rhs);
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
	void Seti(int val) { i = val; }
	std::string Getps(void) { return *ps;}
private:
	std::string *ps;
	int i;
	std::size_t *use;
};

HasPtr::~HasPtr()
{
	if (--*use == 0) {
		delete ps;
		delete use;
	}
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
	++*rhs.use;
	if (--*use == 0) {
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}

/*HasPtr& HasPtr::operator=(HasPtr &&rhs)
{
	if (this != &rhs) {
		ps = rhs.ps;
		i = rhs.i;
		use = rhs.use;
		rhs.ps = nullptr;
		rhs.use = NULL;
	}
	return *this;
}*/

bool HasPtr::operator<(const HasPtr &h2)
{
	return *ps < *h2.ps;
}

inline
void swap(HasPtr &lhs, HasPtr &rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}
