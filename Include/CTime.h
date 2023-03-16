#pragma once
#include <Windows.h>

//Takes care and gives values for time
class 
CTime{ 
public: 
	CTime();
	~CTime();

	void
	init();

	void
	update();

	void
	render();

	void
	destroy();

private:
	LARGE_INTEGER m_iCurrentTime;
	LARGE_INTEGER m_iLastTime;
	LARGE_INTEGER m_iTimerFrequency;

public: 
	float m_fDeltaTime;
};