#pragma once
#include <iostream>

#include "VisualElement.h"
#include "RendererPort.h"

namespace Game {
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
        Character(RendererPort* adapter, const RenderDataDTO& renderDataDTOParam);

        virtual void attack() = 0;

        void goDown();
        void goUp();
        void goRight();
        void goLeft();
    };
}
