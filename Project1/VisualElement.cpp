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

void VisualElement::verifyCollision(VisualElement* otherElement) {

    if (this->positionXInMeters < otherElement->positionXInMeters + otherElement->widthInMeters &&
        this->positionXInMeters + this->widthInMeters > otherElement->positionXInMeters &&
        this->positionYInMeters < otherElement->positionYInMeters + otherElement->heightInMeters &&
        this->heightInMeters + this->positionYInMeters > otherElement->positionYInMeters) {
        this->onCollision();
	}
}