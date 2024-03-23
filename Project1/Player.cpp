#include <SDL.h>
#include "Player.h"


namespace Game {
    Player::Player(
        RendererPort* rendererPort_, PhysicsEngine* physicsEngine_, float positionXInMeters, float positionYInMeters
    ) : Character(rendererPort_, physicsEngine_, RenderDataDTO{ positionXInMeters, positionYInMeters, 50, 50, "#ffff00" }) {}

    void Player::attack() {
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

    void Player::onCollision() {
	    std::cout << "Player collision" << std::endl;
        this->hexColor = "00000"; 
    }
}
