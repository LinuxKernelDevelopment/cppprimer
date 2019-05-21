class Folder {
public:
	explicit Folder() { }
	Folder(const Folder&);
	Folder& operator=(const Folder&);
	~Folder();
	void addMsg(Message *);
	void remMsg(Message *);
private:
	std::set<Message*> message;
};

Folder::Folder(const Folder& folder) :
	message(folder.message)
{
}

Folder& Folder::operator=(const Folder& folder)
{
	message = folder.message;
}

void Folder::addMsg(Message *msg)
{
	message.insert(msg);
}

void Folder::remMsg(Message *msg)
{
	message.erase(msg);
}
