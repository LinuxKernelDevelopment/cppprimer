class Sales_data
{
	friend std::istream& operator>>(std::istream&, Sales_data&);
	friend std::ostream& operator<<(std::ostream&, const Sales_data&);
	friend Sales_data& operator+(const Sales_data&, const Sales_data&);
public:
	Sales_data& operator+=(const Sales_data&);
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::operator+=(const Sales_data &rhs)
{
	return operator+(*this, rhs);
}
Sales_data& Sales_data::operator+=(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.units_sold;
	return *this;
}

std::iostream& operator>>(std::istream &is, Sales_data& item)
{
	double price;
	is >> item.bookNo >> item.units_sold >> price;
	if (is)
		item.revenue = item.units_sold * price;
	else
		item = Sales_data();
	return is;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.units_sold += rhs.units_sold;
	sum.revenue += rhs.revenue;
	return sum;
}
