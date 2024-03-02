#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Skill.h"
#include <vector>
#include <iostream>

class Player : public Character {
public:
    Player(RendererPort* adapter, int positionX, int positionY);

    std::vector<Skill*> activeSkills;

    void attack() override;
};

#endif // PLAYER_H


