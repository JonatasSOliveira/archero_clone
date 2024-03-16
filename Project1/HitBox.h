#pragma once
#include "VisualElement.h"
#include "Character.h"

//faca classe hitBox que estende de VisualElement
// esse metodo e responsavel por representar a hitbox de um objeto + o objeto em si
// deve possuir um metodo que deve ser implementado por quem extende-lo que deve fazer algo com a colisao

namespace Game {
    class HitBox : public VisualElement {
    public:
        float hitBoxHeight;
        float hitBoxWidth;
        HitBox(RendererPort* adapter, const RenderDataDTO& renderDataDTOParam);
        virtual void onCollision(const Character& other);
        bool verifyCollision(const Character& other);
    };
}