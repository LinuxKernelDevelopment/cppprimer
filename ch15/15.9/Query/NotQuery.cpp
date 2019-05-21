#include "NotQuery.h"
#include "TextQuery.h"
#include "QueryResult.h"

#if DEBUG_LEVEL >= 1
#include <iostream>
#endif

QueryResult NotQuery::eval(const TextQuery &t) const {
#if DEBUG_LEVEL >= 1
	std::cout << "NotQuery::eval" << std::endl;
#endif

	return QueryResult();
}

Query operator~(const Query &query) {
#if DEBUG_LEVEL >= 1
	std::cout << "Query operator~(const Query &)" << std::endl;
#endif

	return std::shared_ptr<Query_base>(new NotQuery(query));
}
