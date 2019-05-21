#include <initializer_list>
#include <algorithm>
#include <memory>

class StrVec {
public:
	StrVec() :
		elements(nullptr), first_free(nullptr), cap(nullptr) { }
	StrVec(const StrVec&);
	StrVec(std::initializer_list<std::string>);
	StrVec &operator=(const StrVec&);
	StrVec(StrVec &&s) noexcept;
	StrVec &operator=(StrVec &&rhs) noexcept;
	~StrVec();
	void push_back(const std::string&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	std::string *begin() const { return elements; }
	std::string *end() const { return first_free; }
	void resize(size_t n);
private:
	std::allocator<std::string> alloc;

	void chk_n_alloc()
		{ if (size() == capacity()) reallocate(); }

	std::pair<std::string*, std::string*> alloc_n_copy
		(const std::string*, const std::string*);
	void free();
	void reallocate();
	void reserve(int n);
	std::string *elements;
	std::string *first_free;
	std::string *cap;
};

void StrVec::push_back(const std::string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
	auto data = alloc.allocate(e - b);

	return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
	if (elements) {
		/*for (auto p = first_free; p != elements;)
			alloc.destroy(--p);*/
		auto destroy = [&](const std::string p){alloc.destroy(&p);};
		std::for_each(begin(), end(), destroy);
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec(const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec() { free(); }

StrVec &StrVec::operator=(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

StrVec::StrVec(StrVec &&s) noexcept
	: elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	s.elements = s.first_free = s.cap = nullptr;
}

StrVec &StrVec::operator=(StrVec &&rhs) noexcept
{
	if (this != &rhs) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;

		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}

void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;

	auto newdata = alloc.allocate(newcapacity);

	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();

	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

void StrVec::resize(size_t n)
{
	auto newdata = alloc.allocate(n);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest, std::move(*elem++));
	free();

	elements = newdata;
	first_free = dest;
	cap = elements + n;

}

void StrVec::reserve(int n)
{
	if (cap - elements > n)
		return;
	else {
		resize(n);
	}
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
}
