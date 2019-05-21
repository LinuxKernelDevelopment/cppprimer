#include <iostream>
#include "Bulk_quote.h"
#include "Bulk_quote_lim.h"

int main(void)
{
	Bulk_quote bq("12345", 100.0, 100, 0.1);
	Bulk_quote_lim bql("54321", 100.0, 100, 200, 0.1);

	Quote q("67890", 100.0);

	q.debug();
	std::cout << std::endl;
	bq.debug();
	std::cout << std::endl;
	bql.debug();
	std::cout << std::endl;
	print_total(std::cout, bq, 150);
	print_total(std::cout, q, 150);
	print_total(std::cout, bql, 300);
	return 0;
}
