class Person {
friend istream &read(istream &is, Person &item);
friend ostream &print(ostream &os, const Person &item);
private:
	std::string name;
	std::string address;
public:
	Person() = default;
	Person(const std::string name) name(name) { }
	Person(const std::string name, std::string address) name(name), address(address) { }
	Person(istream &is);
	std::string GetName() const { return this->name; }
	std::string GetAddress() const { return this->address; }
}

istream &read(istream &is, Person &item)
{
	is >> item.name >> item.address;
	return is;
}

ostream &print(ostream &os, const Person &item)
{
	os << item.name << " " << item.address;
	return os;
}

Person::Person(istream &is)
{
	is >> name >> address;
}
