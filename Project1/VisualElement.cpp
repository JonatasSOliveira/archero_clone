#include "VisualElement.h"

using namespace Game;

VisualElement::VisualElement(
    RendererPort* adapter, const RenderDataDTO& renderDataDTO
) : rendererPort(adapter) {
    this->positionXInMeters = renderDataDTO.positionXInMeters;
    this->positionYInMeters = renderDataDTO.positionYInMeters;
    this->widthInMeters = renderDataDTO.widthInMeters;
    this->heightInMeters = renderDataDTO.heightInMeters;
    this->hexColor = renderDataDTO.hexColor;
}

