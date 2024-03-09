#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include <iostream>
#include "ConfigManager.h"

class Enemy : public Character {
private:
    ConfigManager configManager = ConfigManager();

public:
    Enemy(RendererPort* adapter);
    void attack() override;
    void randomizePosition();
    void updateEnemy();
};


#endif // ENEMY_H
