#pragma once
#ifndef VISUALELEMENT_H
#define VISUALELEMENT_H
#include "RendererPort.h"
#include "RenderDataDTO.h"

namespace Game {
	class VisualElement
	{
	protected:
		RendererPort* rendererPort;
		float positionXInMeters;
		float positionYInMeters;
		float widthInMeters;
		float heightInMeters;
		std::string hexColor;

	public:
		VisualElement(RendererPort* adapter, const RenderDataDTO& renderDataDTOParam);

		void renderElement() {
			this->rendererPort->renderElement(RenderDataDTO{
				this->positionXInMeters,
				this->positionYInMeters,
				this->widthInMeters,
				this->heightInMeters,
				this->hexColor
			});
		}
	};
}

#endif // VISUALELEMENT_H
