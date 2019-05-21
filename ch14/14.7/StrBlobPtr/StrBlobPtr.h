#ifndef __STRBLOBPTR__
#define	__STRBLOBPTR__
#include <iostream>
#include <memory>
#include <vector>
#include "StrBlob.h"

class StrBlobPtr {
public:
	StrBlobPtr() : curr(0) { }
	StrBlobPtr(StrBlob &a, size_t sz = 0):
		wptr(a.data), curr(sz) { }
	std::string& deref() const;
	StrBlobPtr& incr();

	StrBlobPtr& operator++();
	StrBlobPtr& operator--();
	StrBlobPtr operator++(int);
	StrBlobPtr operator--(int);
	StrBlobPtr& operator+(int);
	StrBlobPtr& operator-(int);
	std::string& operator*() const
	{ auto p = check(curr, "dereference past end");
	  return (*p)[curr];
	}
	std::string* operator->() const
	{
	  return & this->operator*();
	}
private:
	std::shared_ptr<std::vector<std::string>>
		check(std::size_t, const std::string&) const;
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
};

#endif
