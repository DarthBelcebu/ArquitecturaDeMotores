#pragma once
#include "Prerequisities.h"

class Device; //Call to the Class device

class InputLayout{

	public: InputLayout() = default;
	~InputLayout() { SAFE_RELEASE(m_inputLayout) };

	void init(Device device, std::vector<D3D11_INPUT_ELEMENT_DESC> Layout,
		ID3DBlob* VertexShaderData); // Create the input layout

	void update();

	void render();

	void destroy();

	public:	ID3D11InputLayout* m_inputLayout = nullptr;
};