#pragma once
#include <Windows.h>

class CTime{
	public: CTime();
	~CTime();

	void init();	//initializating functions (m_iLastTime & m_iTimerFrequency)


	void update();

	void render();

	void destroy();

	private:
	LARGE_INTEGER m_iCurrentTime;
	LARGE_INTEGER m_iLastTime;
	LARGE_INTEGER m_iTimerFrequency;

	public: float m_fDeltaTime;
};