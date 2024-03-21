#pragma once

#include "RendererPort.h"
#include "RenderDataDTO.h"
 
namespace Game {
	class Object
	{
	protected:
		RendererPort* rendererPort;
		float positionXInMeters;
		float positionYInMeters;

	public:
		Object(RendererPort* adapter, const RenderDataDTO& renderDataDTOParam);

		void renderElement() {
			this->rendererPort->renderElement(RenderDataDTO{
				this->positionXInMeters,
				this->positionYInMeters,
			});
		}
	};
}
