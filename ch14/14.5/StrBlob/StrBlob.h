#ifndef __STRBLOB__
#define __STRBLOB__
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

//class StrBlobPtr;
class StrBlob {
	friend bool operator==(const StrBlob &lhs, const StrBlob &rhs);
	friend bool operator<(const StrBlob &lhs, const StrBlob &rhs);
	friend bool operator<=(const StrBlob &lhs, const StrBlob &rhs);
	friend bool operator>(const StrBlob &lhs, const StrBlob &rhs);
	friend bool operator>=(const StrBlob &lhs, const StrBlob &rhs);
	friend std::ostream& operator<<(std::ostream&, const StrBlob &rhs);
public:
	//friend class StrBlobPtr;
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	StrBlob& operator=(const StrBlob&);
	size_t size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const std::string &t) {data->push_back(t); }
	void push_back(std::string&& t)
	{
		data->push_back(std::move(t));
	}
	void pop_back();

	std::string& front();
	std::string& back();

	std::string& operator[](std::size_t n)
		{ return (*data)[n]; }
	const std::string& operator[](std::size_t n) const
		{ return (*data)[n]; }
	const std::string& front() const;
	const std::string& back() const;
	//StrBlobPtr begin() { return StrBlobPtr(*this); }
	/*StrBlobPtr end() 
		{ auto ret = StrBlobPtr(*this, data->size());
			return ret;}*/
			
private:
	std::shared_ptr<std::vector<std::string>> data;

	void check(size_type i, const std::string &msg) const;
};

#endif
