#include "Player.h"


Player::Player(
    RendererPort* adapter, int positionXInMeters, int positionYInMeters
) : Character(adapter, new RenderDataDTO(positionXInMeters, positionYInMeters, 50, 50, "#ffff00")) {}

void Player::attack() {
    std::cout << "Player attack" << std::endl;
}
