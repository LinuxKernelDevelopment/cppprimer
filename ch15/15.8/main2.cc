#include <iostream>
#include <vector>
#include <memory>
#include "Bulk_quote.h"
#include "Bulk_quote_lim.h"
#include "Basket.h"

int main(void)
{
	Bulk_quote bq("12345", 100.0, 100, 0.1);
	Bulk_quote_lim bql("54321", 100.0, 100, 200, 0.1);

	Quote q("67890", 100.0);
	Basket basket;
	basket.add_item(bq);
	basket.add_item(bql);
	basket.add_item(q);
	basket.total_receipt(std::cout);
	return 0;
}
