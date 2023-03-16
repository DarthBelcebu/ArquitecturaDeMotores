#pragma once
#include "Prerequisities.h"

class
Device; //Calling Device class

class
SamplerState{

public:
	SamplerState() = default;
	~SamplerState() {};

	void
	init(Device device);

	void
	update();

	void
	render();

	void
	destroy();

public:
		ID3D11SamplerState* m_sampler = nullptr; // Create the sample
};