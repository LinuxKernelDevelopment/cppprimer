#pragma once
#include <functional>
#include <memory>

template<typename T>
class SharedPtr;


template<typename T>
class SharedPtr
{
public:
	SharedPtr()
		: ptr(nullptr), ref_count(new std::size_t(1)), deleter(nullptr)
	{ }

	explicit SharedPtr(T *raw_ptr)
		: ptr(raw_ptr), ref_count(new std::size_t(1)), deleter(nullptr)
	{ }
	
	explicit SharedPtr(std::shared_ptr<T> &&sp);
	SharedPtr(const SharedPtr &other)
		: ptr(other.ptr), ref_count(other.ref_count), deleter(other.deleter)
	{
		++*ref_count;
	}

	SharedPtr& operator=(SharedPtr &rhs)
	{
		if (*this ==  rhs)
			return *this;
		if (deleter)
			deleter(ptr);
		ptr = rhs.ptr;
		++*rhs.ref_count;
		ref_count = rhs.ref_count;
		deleter = rhs.deleter;
		return *this;
	}

	operator bool() const
	{
		return ptr ? true : false;
	}

	T& operator *() const
	{
		return *ptr;
	}

	T* operator->() const
	{
		return &*ptr;
	}

	T* get() const
	{
		return ptr;
	}

	std::size_t use_count() const
	{
		return *ref_count;
	}

private:
	T *ptr;
	std::size_t *ref_count;
	std::function<void(T*)> deleter;
};

template<typename T>
SharedPtr<T>::SharedPtr(std::shared_ptr<T> &sp)
{
	if (sp.unique())
		*this = SharedPtr(new T(*sp));
	else
		throw std::runtime_error("unique");
}
