#ifndef BULKQUOTE
#define BULKQUOTE
#include <string>
#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
	using Disc_quote::Disc_quote;
	Bulk_quote() = default;
	Bulk_quote(const std::string&, double, std::size_t, double);

	double net_price(std::size_t) const override;
	void debug(void) override;
private:
	std::size_t min_qty = 0;
	double discount = 0.0;
};

Bulk_quote::Bulk_quote(const std::string& book, double p,
			size_t qty, double disc):
			Disc_quote(book, p, qty, disc) { }


double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

void Bulk_quote::debug()
{
	Quote::debug();
	std::cout << "min_qty:" << min_qty << std::endl;
}
#endif
