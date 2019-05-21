#include "AndQuery.h"
#include "TextQuery.h"
#include "QueryResult.h"

#if DEBUG_LEVEL >= 1
#include <iostream>
#endif

QueryResult AndQuery::eval(const TextQuery &t) const {
#if DEBUG_LEVEL >= 1
	std::cout << "AndQuery::eval" << std::endl;
#endif
	return QueryResult();
}

Query operator&(const Query &lhs, const Query &rhs) {
#if DEBUG_LEVEL >= 1
	std::cout << "Query operator&(const Query &, const Query &)" << std::endl;
#endif
	return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}
