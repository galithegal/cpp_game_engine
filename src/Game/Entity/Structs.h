#pragma once
#include <DirectXMath.h>

namespace dx = DirectX;

struct Vertex {
	dx::XMFLOAT3 pos;
};

struct ConstantBuffer {
	dx::XMFLOAT4X4 worldMatrix;
};

struct ViewProjectionMatrices {
	dx::XMFLOAT4X4 viewMatrix;
	dx::XMFLOAT4X4 projectionMatrix;
};