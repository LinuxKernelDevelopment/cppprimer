#ifndef	BULKQUOTELIM
#define	BULKQUOTELIM
#include <string>
#include "Disc_quote.h"

class Bulk_quote_lim : public Disc_quote {
public:
	Bulk_quote_lim() = default;
	Bulk_quote_lim(const std::string&, double, std::size_t, std::size_t, double);

	double net_price(std::size_t) const override;
private:
	std::size_t min_qty = 0;
	std::size_t max_qty = 0;
	double discount = 0.0;
};

Bulk_quote_lim::Bulk_quote_lim(const std::string& book, double p,
			size_t qty, size_t mqty, double disc):
			Disc_quote(book, p, qty, disc), max_qty(mqty){ }


double Bulk_quote_lim::net_price(size_t cnt) const
{
	if (cnt > max_qty)
		return (cnt - max_qty) * price + max_qty * (1 - discount) *price;
	else if (cnt >= min_qty && cnt <= max_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}
#endif
