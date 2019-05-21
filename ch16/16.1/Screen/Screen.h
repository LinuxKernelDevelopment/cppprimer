#include <string>
#include <vector>

/*class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;

	void clear(ScreenIndex);
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};*/


/*template<std::string::size_type H, std::string::size_type W> class Screen;
template<std::string::size_type H, std::string::size_type W> 
std::ostream& operator<<(std::ostream &os, Screen<H, W> &scr);*/

template<std::string::size_type H, std::string::size_type W>
class Screen {
public:
	//friend void Window_mgr::clear(ScreenIndex);

	friend std::ostream& operator<<(std::ostream& os, Screen<H, W>& c)
	{
		c.display(os);
		return os;
	}
	typedef std::string::size_type pos;
	Screen() : height(H), width(W),
					contents(height * width, ' ') { }
	Screen(char c) : height(H), width(W),
					contents(height * width, c) { }
	Screen set(char c);
	Screen set(pos r, pos col, char ch);
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

/*void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];

	s.contents = string(s.height * s.width, ' ');
}*/

template<std::string::size_type H, std::string::size_type W> 
inline Screen<H, W> Screen<H, W>::set(char c)
{
		contents[cursor] = c;
		return *this;
}

template<std::string::size_type H, std::string::size_type W> 
inline Screen<H, W> Screen<H,W>::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

/*template<std::string::size_type H, std::string::size_type W> 
std::ostream& operator<<(std::ostream &os, Screen<H, W> &scr)
{
	scr.display(os);
	return os;
}*/
