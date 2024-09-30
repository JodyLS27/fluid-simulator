#ifndef OS_WINDOW_H
#define OS_WINDOW_H

#include <string>

namespace liqui
{
	class Window
	{
	public:
		enum Mode
		{
			CUSTOM,
			MAXIMIZED,
			FULLSCREEN
		};

		Window(const std::string& title, int width, int height, Window::Mode mode = MAXIMIZED);
		~Window();

		// Used to swap the OpenGL buffer
		void swap_buffers();

	private:
		int m_width{};
		int M_height{};
		Window::Mode m_mode{};

		// Used to pass in the Data to what OS to use (windows.h, osx.h, etc.)
		void* m_data = nullptr;
	};
}

#endif