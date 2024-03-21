#pragma once
#include "RenderDataDTO.h";

namespace Game {
	class RendererPort
	{
	public:
		virtual void renderElement(const RenderDataDTO& renderDataDTO) = 0;
		virtual void renderPresent() = 0;
		virtual void destroy() = 0;
		virtual ~RendererPort() {}
	};
}
