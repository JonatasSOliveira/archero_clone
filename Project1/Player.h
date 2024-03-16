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
        Player(RendererPort* adapter, float positionX, float positionY);

        std::vector<Skill*> activeSkills;

        void attack() override;

        void verifyKeyboardCommands();
        void onCollision(const Character& other) override;
    };
}

#endif // PLAYER_H


