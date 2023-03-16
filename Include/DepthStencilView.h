#pragma once
#include "Prerequisities.h"

class
Device; 
//Calling the Class Device

class
DepthStencilView{
public:
	DepthStencilView() = default; 
	//Giving the default value to the depth stencil view
	~DepthStencilView(){SAFE_RELEASE(m_pDepthStencilView) }; 

	void
	init(Device device,
			ID3D11Resource* depthStencil,
			DXGI_FORMAT Format); 
	//initializing device, depth stencil and format

	void
	update();

	void
	render();

	void
	destroy();

	public:
	ID3D11DepthStencilView* m_pDepthStencilView = nullptr;
	//creates the depth stencil view
};