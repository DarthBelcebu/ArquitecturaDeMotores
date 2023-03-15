#pragma once
#include "Prerequisities.h"

class Device; //Call to the Class device

class DeviceContext;//Call to the Class deviceContext

class Window;//Call to the class Window

class Texture;//Call to the Class texture

class SwapChain{

	public: SwapChain() = default;
	~SwapChain() {};

	// Create Direct3D device
	void init(Device& device, DeviceContext& deviceContext, Texture& backBuffer, Window window);

	void update();

	void render();

	void destroy();

	//output the screen
	void present();

	private: D3D_DRIVER_TYPE m_driverType = D3D_DRIVER_TYPE_NULL;
	D3D_FEATURE_LEVEL m_featureLevel = D3D_FEATURE_LEVEL_11_0;
	IDXGISwapChain* m_swapChain = nullptr;
};