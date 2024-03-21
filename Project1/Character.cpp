#include <SDL.h>
#include "Character.h"

using namespace Game;

Character::Character(
    RendererPort* rendererPort_, PhysicsEngine* physicsEngine_, const RenderDataDTO& renderDataDTOParam
) : VisualElement(rendererPort_, renderDataDTOParam), physicsEngine(physicsEngine_) {}

void Character::goDown() {
    this->positionYInMeters = this->positionYInMeters + this->physicsEngine->calcDisplacement(
        this->currentSpeedPoints
    );
}

void Character::goUp() {
    this->positionYInMeters = this->positionYInMeters - this->physicsEngine->calcDisplacement(
        this->currentSpeedPoints
    );
}

void Character::goRight() {
    this->positionXInMeters = this->positionXInMeters + this->physicsEngine->calcDisplacement(
        this->currentSpeedPoints
    );
}

void Character::goLeft() {
    this->positionXInMeters = this->positionXInMeters - this->physicsEngine->calcDisplacement(
        this->currentSpeedPoints
    );

}