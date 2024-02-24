#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include <iostream>

class Enemy : public Character {
public:
    void attack() override;
};

#endif // ENEMY_H


