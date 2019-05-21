class TextQuery;
class QueryResult {
friend std::ostream& print(std::ostream&, const QueryResult&);
public:
	QueryResult(std::string s,
		    std::shared_ptr<std::set<line_no>> p,
		    std::shared_ptr<StrVec> f):
		sought(s), lines(p), file(f) { }
private:
	std::string sought;
	std::shared_ptr<std::set<line_no>> lines;
	std::shared_ptr<StrVec> file;
};

QueryResult
TextQuery::query(const std::string &sought) const
{
	static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);

	auto loc = wm.find(sought);
	if (loc == wm.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

std::string make_plural(size_t ctr, const std::string word,
                                	const std::string ending = "s")
{
	        return (ctr > 1) ? word + ending : word;
}

std::ostream &print(std::ostream & os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " "
	   << make_plural(qr.lines->size(), "times", "s") << std::endl;

	for (auto num : *qr.lines)
		os << "\t(line " << num + 1 << ") "
		   << *(qr.file->begin() + num) << std::endl;
	return os;
}
