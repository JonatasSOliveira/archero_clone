#pragma once
#include "RendererPort.h"
#include "RenderDataDTO.h"

namespace Game
{
	class VisualElement
	{
	protected:
		RendererPort *rendererPort;
		float positionXInMeters;
		float positionYInMeters;
		float widthInMeters;
		float heightInMeters;
		std::string hexColor;

	public:
		VisualElement(RendererPort *adapter, const RenderDataDTO &renderDataDTOParam);

		void renderElement()
		{
			this->rendererPort->renderElement(RenderDataDTO{
					this->positionXInMeters,
					this->positionYInMeters,
					this->widthInMeters,
					this->heightInMeters,
					this->hexColor});
		}

		virtual void onCollision() = 0;
		void verifyCollision(VisualElement *otherElement);

		float getPositionXInMeters()
		{
			return this->positionXInMeters;
		}

		float getPositionYInMeters()
		{
			return this->positionYInMeters;
		}
	};
}
