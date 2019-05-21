#include <iostream>

class Date {
	friend std::ostream& operator<<(std::ostream&, const Date&);
	friend std::istream& operator>>(std::istream&, Date&);
	friend bool operator==(const Date &lhs, const Date &rhs);
	friend bool operator!=(const Date &lhs, const Date &rhs);
	friend bool operator<(const Date &lhs, const Date &rhs);
	friend bool operator>(const Date &lhs, const Date &rhs);
	friend bool operator<=(const Date &lhs, const Date &rhs);
	friend bool operator>=(const Date &lhs, const Date &rhs);
public:
	Date() : year(1970), month(1), day(1) { }
	Date(int, int, int);
private:
	int year;
	int month;
	int day;
};

Date::Date(int year, int month, int day) : year(year), month(month), day(day) { }

std::ostream& operator<<(std::ostream &os, const Date &date)
{
	os << date.year << "-" << date.month << "-" << date.day;
	return os;
}

std::istream& operator>>(std::istream &is, Date &date)
{
	is >> date.year >> date.month >> date.day;
	if (!is)
		date = Date();
	return is;
}

bool operator<(const Date &lhs, const Date &rhs)
{
	if (lhs.year < rhs.year)
		return true;
	if (lhs.year == rhs.year && lhs.month < rhs.month)
		return true;
	if (lhs.year == rhs.year && lhs.month == rhs.month && lhs.day < rhs.day)
		return true;
	return false;
}

bool operator>(const Date &lhs, const Date &rhs)
{
	if (lhs.year > rhs.year)
		return true;
	if (lhs.year == rhs.year && lhs.month > rhs.month)
		return true;
	if (lhs.year == rhs.year && lhs.month == rhs.month && lhs.day > rhs.day)
		return true;
	return false;
}

bool operator==(const Date &lhs, const Date &rhs)
{
	return lhs.year == rhs.year &&
		lhs.month == rhs.month &&
		lhs.day == rhs.day;
}

bool operator<=(const Date &lhs, const Date &rhs)
{
	return operator==(lhs, rhs) || operator<(lhs, rhs);
}

bool operator>=(const Date &lhs, const Date &rhs)
{
	return operator>(lhs, rhs) || operator==(lhs, rhs);
}

bool operator!=(const Date &lhs, const Date &rhs)
{
	return !(lhs == rhs);
}
