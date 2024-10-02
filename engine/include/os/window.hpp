#pragma once

#include <string>
#include <Windows.h>

// TODO Rename this namespace
namespace fsolve
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
		Window(const Window& other) = delete; // Removing the copy constructor
		Window& operator =(const Window&) = delete; // Remove equal operator
		~Window();

		bool process_messages();


		// Used to swap the OpenGL buffer
		void swap_buffers();

	private:
		int m_width{};
		int M_height{};
		Window::Mode m_mode{};

		HINSTANCE m_hInstance; 
		HWND m_hWindow;


		// Used to pass in the Data to what OS to use (windows.h, osx.h, etc.)
		void* m_data = nullptr;
	};
}