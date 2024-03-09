#include <SDL.h>
#include "Enemy.h"
#include "Character.h"
#include "VisualElementProps.h"
#include <cstdlib>
#include <ctime>

Enemy::Enemy(
    RendererPort *adapter) : Character(adapter, new RenderDataDTO(0, 0, 50, 50, "#ff0000"))
{
    this->randomizePosition();
}

void Enemy::attack()
{
    std::cout << "Player attack" << std::endl;
}

void Enemy::randomizePosition()
{
    float randomX = this->configManager.getScenePositionX() + (rand() % (this->configManager.getSceneWith() - 50));
    float randomY = this->configManager.getScenePositionY() + (rand() % (this->configManager.getSceneHeight() - 50));
    std::cout << "randomY" << randomY << std::endl;
    std::cout << "randomX" << randomX << std::endl;
    this->renderDataDTO->setPositionXInMeters(randomX);
    this->renderDataDTO->setPositionYInMeters(randomY);
}

void Enemy::updateEnemy() {}
