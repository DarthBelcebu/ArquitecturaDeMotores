#include "CTime.h"

CTime::CTime(){
	m_iCurrentTime;
	m_iLastTime;
	m_iTimerFrequency;
}

CTime::~CTime(){

}

//function initialization
void CTime::init(){
	//A timer that adjusts to the FPS
	QueryPerformanceCounter(&m_iLastTime);
	QueryPerformanceFrequency(&m_iTimerFrequency);
}

void 
CTime::update(){
	//Performance of the PC
	QueryPerformanceCounter(&m_iCurrentTime);	
	m_fDeltaTime = (m_iCurrentTime.QuadPart - m_iLastTime.QuadPart) / (float)m_iTimerFrequency.QuadPart;
	m_iLastTime = m_iCurrentTime;
	m_fDeltaTime = min(m_fDeltaTime, 0.1f);
}

void CTime::render() {

}

void CTime::destroy(){

}