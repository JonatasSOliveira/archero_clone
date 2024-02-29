#include <SDL.h>
#include "Player.h"
#include "Character.h"
#include "VisualElementProps.h"


Player::Player(
    SDL_Renderer* renderer, int positionX, int positionY
) : Character(renderer, new VisualElementProps(positionX, positionY, 50, 50, "#ffff00")) {}

void Player::attack() {
    std::cout << "Player attack" << std::endl;
}
