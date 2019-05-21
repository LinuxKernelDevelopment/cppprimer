#ifndef QUOTE
#define QUOTE
#include <string>
#include <ostream>

class Quote {
public:
	Quote() = default;
	Quote(const Quote&) = default;
	Quote(Quote &&) = default;
	Quote& operator=(const Quote&) = default;
	Quote& operator=(Quote&&) = default;
	Quote(const std::string &book, double sales_price) :
			bookNo(book), price(sales_price) { }
	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n) const
			{ return n * price; }
	virtual ~Quote() = default;
	virtual void debug(void);
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

Quote::Quote(const Quote& q)
{
	std::cout << "Quote(const Quote&)" << std::endl;
	bookNo = q.bookNo;
	price = q.price;
}

Quote::Quote(const Quote&& q)
{
	std::cout << "Quote(const Quote&&)" << std::endl;
	bookNo = std::move(q.bookNo);
	price = std::move(q.price);
}

Quote& operator=(const Quote& rhs)
{
	std::cout << "Quote& operator=(const Quote&)" << std::endl;
	bookNo = rhs.bookNo;
	price = rhs.proce;
	return *this;
}

Quote& operator=(const Quote&& rhs)
{
	std::cout << "Quote& operator=(const Quote&&)" << std::endl;
	bookNo = std::move(rhs.bookNo);
	price = std::move(rhs.proce);
	return *this;
}

double print_total(std::ostream &os,
			const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn()
	   << " # sold: " << n << " total due: " << ret << std::endl;
	return ret;
}

void Quote::debug()
{
	std::cout << "bookNo:" << bookNo << "\tprice:" << price << std::endl;
}

#endif
