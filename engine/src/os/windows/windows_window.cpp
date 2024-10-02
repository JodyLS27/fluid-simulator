#ifdef _WIN32

#include "os/window.hpp"

fsolve::Window::Window(const std::string& title, int width, int height, Window::Mode mode = MAXIMIZED)
{
}

fsolve::Window::~Window() {}

bool fsolve::Window::process_messages()
{
	return false;
}

// Implementation
#endif