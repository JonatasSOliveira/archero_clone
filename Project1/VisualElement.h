#pragma once
#ifndef VISUALELEMENT_H
#define VISUALELEMENT_H
#include "RendererPort.h"
#include "RenderDataDTO.h"


class VisualElement
{
protected:
	RendererPort* rendererPort;
	RenderDataDTO* renderDataDTO;

public:
	VisualElement(RendererPort* adapter, RenderDataDTO* renderDataDTOParam);

	void renderElement() {
		this->rendererPort->renderElement(this->renderDataDTO);
	}
};

#endif // VISUALELEMENT_H
