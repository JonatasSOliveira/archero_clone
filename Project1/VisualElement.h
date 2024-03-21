#pragma once

#include "Object.h"
#include "HitBox.h"
#include <vector>

namespace Game {
	class VisualElement: public Object {
	public:
		float widthInMeters;
		float heightInMeters;
		std::string hexColor;
		std::vector<HitBox> hitBox;
		virtual void onCollision(const Character& other);
		bool verifyCollision(const Character& other);
		VisualElement(RendererPort* adapter, const RenderDataDTO& renderDataDTO);
	};
}

