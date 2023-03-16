#pragma once
#include "Prerequisities.h"

class DeviceContext{
public:
		DeviceContext() = default;
    ~DeviceContext() { SAFE_RELEASE(m_deviceContext) };

	void
	init();

	void
	update();

	void
	render();

	void
	destroy();

	void
	DrawIndexed(unsigned int IndexCount,
							unsigned int StartIndexLocation,
							unsigned int BaseVertexLocation);
						//Draw indexed, non-instanced primitives

	void
	PSSetSamplers(unsigned int StartSlot,
								unsigned int NumSamplers,
								ID3D11SamplerState* const* ppSamplers);
					//Set an array of sampler states to the pixel shader

	void
	PSSetShaderResources(unsigned int StartSlot,
											unsigned int NumViews, 
											ID3D11ShaderResourceView* const* ppShaderResourceViews);

	void
	PSSetConstantBuffers(unsigned int StartSlot,
														unsigned int NumBuffers, 
														ID3D11Buffer *const *ppConstantBuffers);
											//Sets the constant buffers used by the pixel shader

	void
	PSSetShader(ID3D11PixelShader* pPixelShader,
	ID3D11ClassInstance *const *ppClassInstances,
	unsigned int NumClassInstances);
	//Sets a pixel shader to the device

	void VSSetConstantBuffers(unsigned int StartSlot,
		unsigned int NumBuffers,
		ID3D11Buffer *const *ppConstantBuffers);
		//Sets the constant buffers used by the vertex shader

	void VSSetShader(ID3D11VertexShader* pVertexShader, ID3D11ClassInstance *const *ppClassInstances, 
		unsigned int NumClassInstances); //Set a vertex shader to the device.

	void ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, unsigned int ClearFlags, 	float Depth, 
		unsigned int Stencil); //Clears the depth stencil view

	void ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView, const float ColorRGBA[4]);
	//clears the render target view (gives them value of 4)

	void OMSetRenderTargets(unsigned int NumViews, ID3D11RenderTargetView* const* ppRenderTargetViews,
		ID3D11DepthStencilView* pDepthStencilView);	//Bind one or more render targets automically and the depth-stencil buffer to the output-merger stage

	void RSSetViewports(unsigned int NumViewports, const D3D11_VIEWPORT* pViewports);
	//Bind an array of viewports to the rasterizer

	void IASetInputLayout(ID3D11InputLayout* pInputLayout);
	//Bind an input-layout object to the input assembler

	void IASetVertexBuffers(unsigned int StartSlot, unsigned int NumBuffers, ID3D11Buffer* const* ppVertexBuffers,
		const unsigned int* pStrides, const unsigned int* pOffsets);
	//Bind an array of vertex buffers to the input assembler

	void IASetIndexBuffer(ID3D11Buffer* pIndexBuffer, DXGI_FORMAT Format, unsigned int Offset);
	//Bind an index buffer to the input assembler

	void IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology);
	//Bind information about the primitive type, and data order that describes input data for the input assembler stage

	void UpdateSubresource(ID3D11Resource* pDstResource, unsigned int DstSubresource, const D3D11_BOX* pDstBox,
		const void* pSrcData, unsigned int SrcRowPitch, unsigned int SrcDepthPitch);
	//The CPU copies data from memory to a subresource created in non-mappable memory

public:
	ID3D11DeviceContext* m_deviceContext = nullptr;
};