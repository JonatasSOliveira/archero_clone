#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Skill.h"
#include <vector>
#include <iostream>

namespace Game {
    class Player : public Character {
    public:
        Player(RendererPort* adapter, PhysicsEngine* physicsEngine_, float positionX, float positionY);

        std::vector<Skill*> activeSkills;

        void attack() override;

        void verifyKeyboardCommands();
    };
}

#endif // PLAYER_H


