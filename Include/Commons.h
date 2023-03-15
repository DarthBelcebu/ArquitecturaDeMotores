#include "Prerequisities.h"
#pragma once


struct SimpleVertex 
{
    XMFLOAT3 Pos;
    XMFLOAT2 Tex;
};

struct Camera 
{
    XMMATRIX mView;
    XMMATRIX mProjection;
};

struct CBChangesEveryFrame 
{
    XMMATRIX mWorld;
    XMFLOAT4 vMeshColor;
};

struct Vector3
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};