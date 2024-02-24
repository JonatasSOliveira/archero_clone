#include <SDL.h>
#include "Player.h"
#include "Character.h"

Player::Player(
    SDL_Renderer* renderer, int positionX, int positionY, int width, int height
) : Character(renderer, positionX, positionY, width, height) {}

void Player::attack() {
    std::cout << "Player attack" << std::endl;
}
