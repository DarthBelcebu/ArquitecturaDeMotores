#pragma once
#include "Prerequisities.h"
#include "Commons.h"

class
Transform{
public:
	Transform() = default;
	~Transform() {};

	void
	init();

	void
	update();

	void
	render();

	void
	destroy();
	
	public: Vector3 m_v3Position;
	float Scale;
	float Rotation;
	float Speed;
};