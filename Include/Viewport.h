#pragma once
#include "Prerequisities.h"

class Window; //Calls the class Window

class Viewport{
	public:	Viewport() = default;
	~Viewport() {};

	void init(Window window);

	void update();

	void render();

	void destroy();

public: D3D11_VIEWPORT m_viewport; 	//Defines the dimensions of a viewport
};