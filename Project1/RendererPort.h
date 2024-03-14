#pragma once
#include "RenderDataDTO.h";

namespace Game {
	class RendererPort
	{
	public:
		virtual void renderElement(const RenderDataDTO& renderDataDTO) = 0;
		virtual ~RendererPort() {}
	};
}
