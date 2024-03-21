#include <SDL.h>
#include "Character.h"
#include "VisualElement.h"

using namespace Game;

Character::Character(
    RendererPort* adapter, const RenderDataDTO& renderDataDTOParam
) : VisualElement(adapter, renderDataDTOParam) {}

void Character::goDown() {
    this->positionYInMeters = this->positionYInMeters + this->currentSpeedPoints;
}

void Character::goUp() {
    this->positionYInMeters = this->positionYInMeters - this->currentSpeedPoints;
}

void Character::goRight() {
    this->positionXInMeters = this->positionXInMeters + this->currentSpeedPoints;
}

void Character::goLeft() {
    this->positionXInMeters = this->positionXInMeters - this->currentSpeedPoints;

}