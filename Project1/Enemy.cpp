#include <SDL.h>
#include "Enemy.h"
#include "Character.h"
#include "VisualElementProps.h"
#include <cstdlib>
#include <ctime>  


Enemy::Enemy(
    RendererPort* adapter
) : Character(adapter, new RenderDataDTO(0, 0, 50, 50, "#ffff00")) {
    this->randomizePosition();
}

void Enemy::attack() {
    std::cout << "Player attack" << std::endl;
}

void Enemy::randomizePosition() {
    //seta posicao aleatoria
    srand(time(0));
    int randomX = rand() % 800;
    int randomY = rand() % 600;
    this->renderDataDTO->setPositionXInMeters(randomX);
    this->renderDataDTO->setPositionYInMeters(randomY);
 }

void Enemy::updateEnemy() {}

