#include <SDL.h>
#include "Character.h"

Character::Character(
    RendererPort* adapter, RenderDataDTO* renderDataDTOParam
) : VisualElement(adapter, renderDataDTOParam) {}

void Character::goDown() {
    this->renderDataDTO->setPositionYInMeters(
        this->renderDataDTO->getPositionYInMeters() + this->currentSpeedPoints
    );
}

void Character::goUp() {
    this->renderDataDTO->setPositionYInMeters(
        this->renderDataDTO->getPositionYInMeters() - this->currentSpeedPoints
    );
}

void Character::goRight() {
    this->renderDataDTO->setPositionXInMeters(
        this->renderDataDTO->getPositionXInMeters() + this->currentSpeedPoints
    );
}

void Character::goLeft() {
    this->renderDataDTO->setPositionXInMeters(
        this->renderDataDTO->getPositionXInMeters() - this->currentSpeedPoints
    );
}