#include "VisualElement.h"

using namespace Game;

VisualElement::VisualElement(
    RendererPort* adapter, const RenderDataDTO& renderDataDTO
) : Object(adapter, renderDataDTO) {
    this->positionXInMeters = renderDataDTO.positionXInMeters;
    this->positionYInMeters = renderDataDTO.positionYInMeters;
    this->hexColor = renderDataDTO.hexColor;
}

bool VisualElement::verifyCollision(const Character& other) {
    return bool(true);
}

void VisualElement::onCollision(const Character& other) {}