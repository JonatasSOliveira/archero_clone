#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include "VisualElement.h"

class Character : public VisualElement {
private:
    int maxHealth = 0;
    int baseAttackPoints = 0;
    int baseDefensePoints = 0;
    int baseSpeedPoints = 0;
    int baseSpeedAtackPoints = 0;

    int currentHealth = 0;
    int currentAttackPoints = 0;
    int currentDefensePoints = 0;
    int currentSpeedPoints = 5;
    int currentSpeedAtackPoints = 0;

public:
    Character(SDL_Renderer* renderer, int positionX, int positionY, int width, int height);
    SDL_Texture* texture;
    virtual void attack() = 0;

    void goDown();
    void goUp();
    void goRight();
    void goLeft();
    void renderTexture();
};

#endif // CHARACTER_H
