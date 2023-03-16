#include "Prerequisities.h"
#pragma once

class
Device;//Call to the Class device

class
Texture;//Call to the Class Texture

class
RenderTargetView{
public:
	RenderTargetView() = default;
	~RenderTargetView() {};

	void
	init(Device device,
		   Texture backBuffer,
		   DXGI_FORMAT Format);
	//A render target view interface identifies the render target subresources that can be accessed while rendering

	void
	update();

	void
	render();

	void
	destroy();

public:
		ID3D11RenderTargetView* m_renderTargetView = nullptr;
		//Create the Render Target View
};