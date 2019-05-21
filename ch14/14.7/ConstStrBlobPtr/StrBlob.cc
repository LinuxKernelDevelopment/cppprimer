#include "StrBlob.h"

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il):
		data(std::make_shared<std::vector<std::string>>(il)) { }

bool operator==(const StrBlob &lhs, const StrBlob &rhs)
{
	return lhs.data == rhs.data;
}

bool operator<(const StrBlob &lhs, const StrBlob &rhs)
{
	std::vector<std::string> l = *lhs.data;
	std::vector<std::string> r = *rhs.data;
	return l < r;
}

bool operator>(const StrBlob &lhs, const StrBlob &rhs)
{
	std::vector<std::string> l = *lhs.data;
	std::vector<std::string> r = *rhs.data;
	return l > r;
}

bool operator<=(const StrBlob &lhs, const StrBlob &rhs)
{
	return operator<(lhs, rhs) || operator==(lhs, rhs);
}

bool operator>=(const StrBlob &lhs, const StrBlob &rhs)
{
	return operator>(lhs, rhs) || operator==(lhs, rhs);
}

std::ostream& operator<<(std::ostream &os, const StrBlob &rhs)
{
	for (auto tmp : *rhs.data) {
		os << tmp << " ";
	}
	return os;
}

void StrBlob::check(size_type i, const std::string &msg) const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}

std::string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

std::string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

StrBlob& StrBlob::operator=(const StrBlob &rhs)
{
	data = rhs.data;
	return *this;
}

const std::string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

const std::string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}
