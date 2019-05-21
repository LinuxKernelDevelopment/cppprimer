std::istream &read(std::istream& is, struct Sales_data& item);
class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream &read(std::ifstream&, Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend bool compareIsbn(const Sales_data&, const Sales_data&);
public:
	/*Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p) :
		   bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(std::istream &is)
	{
		read(is, *this);
	}*/
	Sales_data(std::string s, unsigned cnt, double price) :
		bookNo(s), units_sold(cnt), revenue(cnt*price) { 
		std::cout << "Sales_data(string, unsigned, double)" << std::endl; 
	}
	Sales_data() : Sales_data("", 0, 0) { 
		std::cout << "Sales_data()" << std::endl;
	}
	Sales_data(std::string s) : Sales_data(s, 0, 0) {
		std::cout << "Sales_data(std::string)" << std::endl;
	}
	Sales_data(std::ifstream &is) : Sales_data() { 
		read(is, *this);
		std::cout << "Sales_data(std::istream)" << std::endl;
	}
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	inline double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::ostream &print(std::ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " "
	   << item.revenue << " " << item.avg_price();
	return os;
}

std::istream &read(std::ifstream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

bool compareIsbn(const Sales_data &item1, const Sales_data &item2)
{
	return item1.isbn() > item2.isbn();
}
