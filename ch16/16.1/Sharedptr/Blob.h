#ifndef BLOB_H
#define BLOB_H
#include <vector>
#include <memory>
#include <initializer_list>
#include "SharedPtr.h"

template <typename> class BlobPtr;
template <typename T> class Blob {
public:
	friend class BlobPtr<T>;
	typedef	T value_type;
	typedef	typename std::vector<T>::size_type size_type;

	Blob();
	Blob(std::initializer_list<T> il);
	template <typename It> Blob(It, It);

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const T &t) { data->push_back(t); }

	void push_back(T &&t) { data->push_back(std::move(t)); }
	void pop_back();

	T& back();
	T& operator[](size_type i);
private:
	SharedPtr<std::vector<T>> data;

	void check(size_type i, const std::string &msg) const;
};

template <typename T>
void Blob<T>::check(size_type i, const std::string &msg) const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}

template <typename T>
T& Blob<T>::back()
{
	check(0, "back on empty Blob");
	return data->back();
}

template <typename T>
template <typename It>
	Blob<T>::Blob(It b, It e) :
		data(std::make_shared<std::vector<T>>(b, e)) { }

template <typename T>
T& Blob<T>::operator[](size_type i)
{
	check(i, "subscript out of range");
	return (*data)[i];
}

template <typename T> void Blob<T>::pop_back()
{
	check(0, "pop_back on empty Blob");
	data->pop_back();
}

template <typename T>
Blob<T>::Blob(std::initializer_list<T> il) :
	data(std::make_shared<std::vector<T>>(il)) { }
#endif
