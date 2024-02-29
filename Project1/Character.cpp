#include <SDL.h>
#include <iostream>
#include "Character.h"
#include "VisualElement.h"
#include "VisualElementProps.h"

Character::Character(
    SDL_Renderer* renderer, VisualElementProps* visualElementProps
) : VisualElement(renderer, visualElementProps) {}

void Character::goDown() {
    this->positionY += this->currentSpeedPoints;
}

void Character::goUp() {
   this->positionY -= this->currentSpeedPoints;
}

void Character::goRight() {
    this->positionX += this->currentSpeedPoints;
}

void Character::goLeft() {
    this->positionX -= this->currentSpeedPoints;
}