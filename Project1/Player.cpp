#include <SDL.h>
#include "Player.h"

using namespace Game;

Player::Player(
    RendererPort* adapter, float positionXInMeters, float positionYInMeters
) : Character(adapter, RenderDataDTO{ positionXInMeters, positionYInMeters, 50, 50, "#ffff00" }) {}

void Player::attack() {
    std::cout << "Player attack" << std::endl;
}

void Player::verifyKeyboardCommands() {
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
    if (currentKeyStates[SDL_SCANCODE_UP]) {
        this->goUp();
    }
    if (currentKeyStates[SDL_SCANCODE_DOWN]) {
        this->goDown();
    }
    if (currentKeyStates[SDL_SCANCODE_LEFT]) {
        this->goLeft();
    }
    if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
        this->goRight();
    }
}