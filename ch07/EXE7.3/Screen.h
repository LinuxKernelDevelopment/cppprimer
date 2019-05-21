#include <string>

class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;

	void clear(ScreenIndex);
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen {
public:
	friend void Window_mgr::clear(ScreenIndex);
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos height, pos width) : height(height), width(width),
					contents(height * width, ' ') { }
	Screen(pos height, pos width, char c) : height(height), width(width),
					contents(height * width, c) { }
	Screen set(char);
	Screen set(pos, pos, char);
	Screen display(std::ostream &os)
			{ do_display(os); return *this; }
	const Screen &display(std::ostream &os) const
			{ do_display(os); return *this; }
	Screen move(pos h, pos w)
			{ cursor = h*width + w; return *this; }
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];

	s.contents = string(s.height * s.width, ' ');
}

inline Screen Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}
