#include "StrVec.h"
#include <vector>
#include <string>
#include <ostream>
#include <sstream>
#include <map>
#include <set>
class QueryResult;
using line_no = std::vector<std::string>::size_type;
class TextQuery {
public:
	TextQuery(std::istream&);
	QueryResult query(const std::string&) const;
private:
	std::shared_ptr<StrVec> file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::istream &is) : file(new StrVec())
{
	std::string text;
	while (std::getline(is, text)) {
		file->push_back(text);
		int n = file->size() - 1;
		std::istringstream line(text);
		std::string word;
		while (line >> word) {
			auto &lines = wm[word];
			if (!lines)
				lines.reset(new std::set<line_no>);
			lines->insert(n);
		}
	}
}
