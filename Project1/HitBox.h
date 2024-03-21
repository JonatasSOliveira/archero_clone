#pragma once
#include "VisualElement.h"
#include "Character.h"

namespace Game {
    class HitBox : public VisualElement {
    public:
        float hitBoxHeight;
        float hitBoxWidth;
        HitBox(float hitBoxHeight, float hitBoxWidth);
    };
}
