#include <SDL.h>
#include "Character.h"
#include "VisualElement.h"

Character::Character(
    SDL_Renderer* renderer, int positionX, int positionY, int width, int height
) : VisualElement(renderer, this->texture, positionX, positionY, width, height) {}

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