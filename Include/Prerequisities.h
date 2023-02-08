#pragma once

//std lib
#include <iostream>
#include <sstream>
#include <vector>

//External Lib
#include <d3d11.h>
#include <d3dx11.h>
#include <d3dcompiler.h>
#include <xnamath.h>

//Windows
#include <windows.h>

//Internal Includes
#include "resource.h"

//Defines
//Debug avanzado
#define WINDOWS
#define WARNING( s )						 \
{											 \
   std::wostringstream os_;					 \
   os_ << s;								 \
   OutputDebugStringW( os_.str().c_str() );  \
}
