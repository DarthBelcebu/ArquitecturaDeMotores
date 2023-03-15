#pragma once
#include <Windows.h>

class Window{
	public:Window();
	~Window();

	HRESULT init(HINSTANCE hInstance, int nCmdShow, WNDPROC wndproc, LPCSTR windowName);

	void update();

	void render();

	void destroy();

	//creates window
	public:
	HWND m_hWnd = nullptr;
	HINSTANCE m_hInst = nullptr;
	RECT m_rect;
	unsigned int m_width;
	unsigned int m_height;
	LPCSTR m_windowName = "None";
};

