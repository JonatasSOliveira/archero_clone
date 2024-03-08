#pragma once
#include "RenderDataDTO.h";

class RendererPort {
public:
	virtual void renderElement(RenderDataDTO* renderDataDTO) = 0;
	virtual ~RendererPort() {}
};