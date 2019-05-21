class StrBlobPtr {
public:
	StrBlobPtr() : curr(0) { }
	StrBlobPtr(StrBlob &a, size_t sz = 0) :
		wptr(a.data), curr(sz) { }
	std::string& deref() const;
	StrBlobPtr& incr();
	StrBlobPtr(const StrBlobPtr &p) :
		wptr(new std::vector<std::string>(p.wptr), curr(p.curr) { }
	StrBlobPtr& operator=(const StrBlobPtr &rhs) 
	{
		auto newp = make_shared<std::vector<std::string>>(*rhs.wptr);
		delete wptr;
		wptr = newp;
		curr = rhs.curr;
		return *this;
	}
private:
	std::shared_ptr<std::vector<std::string>>
		check(std::size_t, const std::string&) const;
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
};
