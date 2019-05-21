#include <iostream>
#include <vector>
#include <memory>
#include "Bulk_quote.h"
#include "Bulk_quote_lim.h"

int main(void)
{
	std::vector<Quote> qv;
	std::vector<std::shared_ptr<Quote>> qv2;
	Bulk_quote bq("12345", 100.0, 100, 0.1);
	Bulk_quote_lim bql("54321", 100.0, 100, 200, 0.1);

	Quote q("67890", 100.0);

	qv.push_back(bq);
	qv.push_back(bql);
	qv.push_back(q);
	int total = 0;
	for (auto tmp : qv) {
		total += tmp.net_price(500);
	}
	std::cout << "total:" << total << std::endl;
	qv2.push_back(std::make_shared<Bulk_quote>(bq));
	qv2.push_back(std::make_shared<Bulk_quote_lim>(bql));
	qv2.push_back(std::make_shared<Quote>(q));
	total = 0;
	for (auto tmp : qv2) {
		total += tmp->net_price(500);
	}
	std::cout << "total:" << total << std::endl;
	q.debug();
	std::cout << std::endl;
	bq.debug();
	std::cout << std::endl;
	bql.debug();
	std::cout << std::endl;
	print_total(std::cout, bq, 500);
	print_total(std::cout, q, 500);
	print_total(std::cout, bql, 500);
	return 0;
}
