class Sales_data
{
	friend std::istream& operator>>(std::istream&, Sales_data&);
	friend std::ostream& operator<<(std::ostream&, const Sales_data&);
	friend Sales_data& operator+(const Sales_data&, const Sales_data&);
public:
	Sales_data& operator+=(const Sales_data&);
	Sales_data& operator=(std::string bookNo);
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

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

std::ostream& operator<<(std::ostream& out, const Sales_data& item)
{
	out << item.bookNo << " " << item.units_sold << " " << item.revenue;
	return out;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}

Sales_data &Sales_data::operator=(std::string bookNo)
{
	bookNo = bookNo;
	units_sold = 0;
	revenue = 0.0;
	return *this;
}
