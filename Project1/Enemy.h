#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include <iostream>

namespace Game {
    class Enemy : public Character {

    public:
        Enemy(RendererPort* adapter, PhysicsEngine* physicsEngine_);
        void attack() override;
        void randomizePosition();
        void updateEnemy();
        void onCollision() override;
    };
}

#endif // ENEMY_H
