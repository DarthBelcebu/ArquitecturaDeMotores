#include "Window.h"
#include "Prerequisities.h"

Window::Window(){

}

Window::~Window(){

}

HRESULT
Window::init(HINSTANCE hInstance, int nCmdShow, WNDPROC wndproc, LPCSTR windowName) {

    m_windowName = windowName;
    m_hInst = hInstance;

    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = wndproc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = m_hInst;
    wcex.hIcon = LoadIcon(m_hInst, (LPCTSTR)IDI_TUTORIAL1);
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = nullptr;
    wcex.lpszClassName = "TutorialWindowClass";
    wcex.hIconSm = LoadIcon(wcex.hInstance, (LPCTSTR)IDI_TUTORIAL1);
    wcex.hIconSm = NULL;
    if (!RegisterClassEx(&wcex))
        return E_FAIL;

	RECT rc = { 0, 0, 640, 480 };
	AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);

    m_hWnd = CreateWindow("TutorialWindowClass", m_windowName, WS_OVERLAPPEDWINDOW,CW_USEDEFAULT, 
        CW_USEDEFAULT, rc.right - rc.left,  rc.bottom - rc.top, nullptr, nullptr, m_hInst, nullptr);

    if (!m_hWnd)
        return E_FAIL;

    ShowWindow(m_hWnd, nCmdShow);

    GetClientRect(m_hWnd, &m_rect);
    m_width = m_rect.right - m_rect.left;
    m_height = m_rect.bottom - m_rect.top;

    return S_OK;
}

void
Window::update(){

}

void
Window::render(){

}

void
Window::destroy(){

}